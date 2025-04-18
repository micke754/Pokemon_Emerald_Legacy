#include "trig.h"
#include "global.h"

// Values of sin(x*(π/128)) as Q8.8 fixed-point numbers from x = 0 to x = 319
const s16 gSineTable[] = {
    Q_8_8(0),           // sin(0*(π/128))
    Q_8_8(0.0234375),   // sin(1*(π/128))
    Q_8_8(0.046875),    // sin(2*(π/128))
    Q_8_8(0.0703125),   // sin(3*(π/128))
    Q_8_8(0.09765625),  // sin(4*(π/128))
    Q_8_8(0.12109375),  // sin(5*(π/128))
    Q_8_8(0.14453125),  // sin(6*(π/128))
    Q_8_8(0.16796875),  // sin(7*(π/128))
    Q_8_8(0.19140625),  // sin(8*(π/128))
    Q_8_8(0.21875),     // sin(9*(π/128))
    Q_8_8(0.2421875),   // sin(10*(π/128))
    Q_8_8(0.265625),    // sin(11*(π/128))
    Q_8_8(0.2890625),   // sin(12*(π/128))
    Q_8_8(0.3125),      // sin(13*(π/128))
    Q_8_8(0.3359375),   // sin(14*(π/128))
    Q_8_8(0.359375),    // sin(15*(π/128))
    Q_8_8(0.37890625),  // sin(16*(π/128))
    Q_8_8(0.40234375),  // sin(17*(π/128))
    Q_8_8(0.42578125),  // sin(18*(π/128))
    Q_8_8(0.44921875),  // sin(19*(π/128))
    Q_8_8(0.46875),     // sin(20*(π/128))
    Q_8_8(0.4921875),   // sin(21*(π/128))
    Q_8_8(0.51171875),  // sin(22*(π/128))
    Q_8_8(0.53125),     // sin(23*(π/128))
    Q_8_8(0.5546875),   // sin(24*(π/128))
    Q_8_8(0.57421875),  // sin(25*(π/128))
    Q_8_8(0.59375),     // sin(26*(π/128))
    Q_8_8(0.61328125),  // sin(27*(π/128))
    Q_8_8(0.6328125),   // sin(28*(π/128))
    Q_8_8(0.65234375),  // sin(29*(π/128))
    Q_8_8(0.66796875),  // sin(30*(π/128))
    Q_8_8(0.6875),      // sin(31*(π/128))
    Q_8_8(0.70703125),  // sin(32*(π/128))
    Q_8_8(0.72265625),  // sin(33*(π/128))
    Q_8_8(0.73828125),  // sin(34*(π/128))
    Q_8_8(0.75390625),  // sin(35*(π/128))
    Q_8_8(0.76953125),  // sin(36*(π/128))
    Q_8_8(0.78515625),  // sin(37*(π/128))
    Q_8_8(0.80078125),  // sin(38*(π/128))
    Q_8_8(0.81640625),  // sin(39*(π/128))
    Q_8_8(0.828125),    // sin(40*(π/128))
    Q_8_8(0.84375),     // sin(41*(π/128))
    Q_8_8(0.85546875),  // sin(42*(π/128))
    Q_8_8(0.8671875),   // sin(43*(π/128))
    Q_8_8(0.87890625),  // sin(44*(π/128))
    Q_8_8(0.890625),    // sin(45*(π/128))
    Q_8_8(0.90234375),  // sin(46*(π/128))
    Q_8_8(0.9140625),   // sin(47*(π/128))
    Q_8_8(0.921875),    // sin(48*(π/128))
    Q_8_8(0.9296875),   // sin(49*(π/128))
    Q_8_8(0.94140625),  // sin(50*(π/128))
    Q_8_8(0.94921875),  // sin(51*(π/128))
    Q_8_8(0.953125),    // sin(52*(π/128))
    Q_8_8(0.9609375),   // sin(53*(π/128))
    Q_8_8(0.96875),     // sin(54*(π/128))
    Q_8_8(0.97265625),  // sin(55*(π/128))
    Q_8_8(0.98046875),  // sin(56*(π/128))
    Q_8_8(0.984375),    // sin(57*(π/128))
    Q_8_8(0.98828125),  // sin(58*(π/128))
    Q_8_8(0.9921875),   // sin(59*(π/128))
    Q_8_8(0.9921875),   // sin(60*(π/128))
    Q_8_8(0.99609375),  // sin(61*(π/128))
    Q_8_8(0.99609375),  // sin(62*(π/128))
    Q_8_8(0.99609375),  // sin(63*(π/128))
    Q_8_8(1),           // sin(64*(π/128))
    Q_8_8(0.99609375),  // sin(65*(π/128))
    Q_8_8(0.99609375),  // sin(66*(π/128))
    Q_8_8(0.99609375),  // sin(67*(π/128))
    Q_8_8(0.9921875),   // sin(68*(π/128))
    Q_8_8(0.9921875),   // sin(69*(π/128))
    Q_8_8(0.98828125),  // sin(70*(π/128))
    Q_8_8(0.984375),    // sin(71*(π/128))
    Q_8_8(0.98046875),  // sin(72*(π/128))
    Q_8_8(0.97265625),  // sin(73*(π/128))
    Q_8_8(0.96875),     // sin(74*(π/128))
    Q_8_8(0.9609375),   // sin(75*(π/128))
    Q_8_8(0.953125),    // sin(76*(π/128))
    Q_8_8(0.94921875),  // sin(77*(π/128))
    Q_8_8(0.94140625),  // sin(78*(π/128))
    Q_8_8(0.9296875),   // sin(79*(π/128))
    Q_8_8(0.921875),    // sin(80*(π/128))
    Q_8_8(0.9140625),   // sin(81*(π/128))
    Q_8_8(0.90234375),  // sin(82*(π/128))
    Q_8_8(0.890625),    // sin(83*(π/128))
    Q_8_8(0.87890625),  // sin(84*(π/128))
    Q_8_8(0.8671875),   // sin(85*(π/128))
    Q_8_8(0.85546875),  // sin(86*(π/128))
    Q_8_8(0.84375),     // sin(87*(π/128))
    Q_8_8(0.828125),    // sin(88*(π/128))
    Q_8_8(0.81640625),  // sin(89*(π/128))
    Q_8_8(0.80078125),  // sin(90*(π/128))
    Q_8_8(0.78515625),  // sin(91*(π/128))
    Q_8_8(0.76953125),  // sin(92*(π/128))
    Q_8_8(0.75390625),  // sin(93*(π/128))
    Q_8_8(0.73828125),  // sin(94*(π/128))
    Q_8_8(0.72265625),  // sin(95*(π/128))
    Q_8_8(0.70703125),  // sin(96*(π/128))
    Q_8_8(0.6875),      // sin(97*(π/128))
    Q_8_8(0.66796875),  // sin(98*(π/128))
    Q_8_8(0.65234375),  // sin(99*(π/128))
    Q_8_8(0.6328125),   // sin(100*(π/128))
    Q_8_8(0.61328125),  // sin(101*(π/128))
    Q_8_8(0.59375),     // sin(102*(π/128))
    Q_8_8(0.57421875),  // sin(103*(π/128))
    Q_8_8(0.5546875),   // sin(104*(π/128))
    Q_8_8(0.53125),     // sin(105*(π/128))
    Q_8_8(0.51171875),  // sin(106*(π/128))
    Q_8_8(0.4921875),   // sin(107*(π/128))
    Q_8_8(0.46875),     // sin(108*(π/128))
    Q_8_8(0.44921875),  // sin(109*(π/128))
    Q_8_8(0.42578125),  // sin(110*(π/128))
    Q_8_8(0.40234375),  // sin(111*(π/128))
    Q_8_8(0.37890625),  // sin(112*(π/128))
    Q_8_8(0.359375),    // sin(113*(π/128))
    Q_8_8(0.3359375),   // sin(114*(π/128))
    Q_8_8(0.3125),      // sin(115*(π/128))
    Q_8_8(0.2890625),   // sin(116*(π/128))
    Q_8_8(0.265625),    // sin(117*(π/128))
    Q_8_8(0.2421875),   // sin(118*(π/128))
    Q_8_8(0.21875),     // sin(119*(π/128))
    Q_8_8(0.19140625),  // sin(120*(π/128))
    Q_8_8(0.16796875),  // sin(121*(π/128))
    Q_8_8(0.14453125),  // sin(122*(π/128))
    Q_8_8(0.12109375),  // sin(123*(π/128))
    Q_8_8(0.09765625),  // sin(124*(π/128))
    Q_8_8(0.0703125),   // sin(125*(π/128))
    Q_8_8(0.046875),    // sin(126*(π/128))
    Q_8_8(0.0234375),   // sin(127*(π/128))
    Q_8_8(0),           // sin(128*(π/128))
    Q_8_8(-0.0234375),  // sin(129*(π/128))
    Q_8_8(-0.046875),   // sin(130*(π/128))
    Q_8_8(-0.0703125),  // sin(131*(π/128))
    Q_8_8(-0.09765625), // sin(132*(π/128))
    Q_8_8(-0.12109375), // sin(133*(π/128))
    Q_8_8(-0.14453125), // sin(134*(π/128))
    Q_8_8(-0.16796875), // sin(135*(π/128))
    Q_8_8(-0.19140625), // sin(136*(π/128))
    Q_8_8(-0.21875),    // sin(137*(π/128))
    Q_8_8(-0.2421875),  // sin(138*(π/128))
    Q_8_8(-0.265625),   // sin(139*(π/128))
    Q_8_8(-0.2890625),  // sin(140*(π/128))
    Q_8_8(-0.3125),     // sin(141*(π/128))
    Q_8_8(-0.3359375),  // sin(142*(π/128))
    Q_8_8(-0.359375),   // sin(143*(π/128))
    Q_8_8(-0.37890625), // sin(144*(π/128))
    Q_8_8(-0.40234375), // sin(145*(π/128))
    Q_8_8(-0.42578125), // sin(146*(π/128))
    Q_8_8(-0.44921875), // sin(147*(π/128))
    Q_8_8(-0.46875),    // sin(148*(π/128))
    Q_8_8(-0.4921875),  // sin(149*(π/128))
    Q_8_8(-0.51171875), // sin(150*(π/128))
    Q_8_8(-0.53125),    // sin(151*(π/128))
    Q_8_8(-0.5546875),  // sin(152*(π/128))
    Q_8_8(-0.57421875), // sin(153*(π/128))
    Q_8_8(-0.59375),    // sin(154*(π/128))
    Q_8_8(-0.61328125), // sin(155*(π/128))
    Q_8_8(-0.6328125),  // sin(156*(π/128))
    Q_8_8(-0.65234375), // sin(157*(π/128))
    Q_8_8(-0.66796875), // sin(158*(π/128))
    Q_8_8(-0.6875),     // sin(159*(π/128))
    Q_8_8(-0.70703125), // sin(160*(π/128))
    Q_8_8(-0.72265625), // sin(161*(π/128))
    Q_8_8(-0.73828125), // sin(162*(π/128))
    Q_8_8(-0.75390625), // sin(163*(π/128))
    Q_8_8(-0.76953125), // sin(164*(π/128))
    Q_8_8(-0.78515625), // sin(165*(π/128))
    Q_8_8(-0.80078125), // sin(166*(π/128))
    Q_8_8(-0.81640625), // sin(167*(π/128))
    Q_8_8(-0.828125),   // sin(168*(π/128))
    Q_8_8(-0.84375),    // sin(169*(π/128))
    Q_8_8(-0.85546875), // sin(170*(π/128))
    Q_8_8(-0.8671875),  // sin(171*(π/128))
    Q_8_8(-0.87890625), // sin(172*(π/128))
    Q_8_8(-0.890625),   // sin(173*(π/128))
    Q_8_8(-0.90234375), // sin(174*(π/128))
    Q_8_8(-0.9140625),  // sin(175*(π/128))
    Q_8_8(-0.921875),   // sin(176*(π/128))
    Q_8_8(-0.9296875),  // sin(177*(π/128))
    Q_8_8(-0.94140625), // sin(178*(π/128))
    Q_8_8(-0.94921875), // sin(179*(π/128))
    Q_8_8(-0.953125),   // sin(180*(π/128))
    Q_8_8(-0.9609375),  // sin(181*(π/128))
    Q_8_8(-0.96875),    // sin(182*(π/128))
    Q_8_8(-0.97265625), // sin(183*(π/128))
    Q_8_8(-0.98046875), // sin(184*(π/128))
    Q_8_8(-0.984375),   // sin(185*(π/128))
    Q_8_8(-0.98828125), // sin(186*(π/128))
    Q_8_8(-0.9921875),  // sin(187*(π/128))
    Q_8_8(-0.9921875),  // sin(188*(π/128))
    Q_8_8(-0.99609375), // sin(189*(π/128))
    Q_8_8(-0.99609375), // sin(190*(π/128))
    Q_8_8(-0.99609375), // sin(191*(π/128))
    Q_8_8(-1),          // sin(192*(π/128))
    Q_8_8(-0.99609375), // sin(193*(π/128))
    Q_8_8(-0.99609375), // sin(194*(π/128))
    Q_8_8(-0.99609375), // sin(195*(π/128))
    Q_8_8(-0.9921875),  // sin(196*(π/128))
    Q_8_8(-0.9921875),  // sin(197*(π/128))
    Q_8_8(-0.98828125), // sin(198*(π/128))
    Q_8_8(-0.984375),   // sin(199*(π/128))
    Q_8_8(-0.98046875), // sin(200*(π/128))
    Q_8_8(-0.97265625), // sin(201*(π/128))
    Q_8_8(-0.96875),    // sin(202*(π/128))
    Q_8_8(-0.9609375),  // sin(203*(π/128))
    Q_8_8(-0.953125),   // sin(204*(π/128))
    Q_8_8(-0.94921875), // sin(205*(π/128))
    Q_8_8(-0.94140625), // sin(206*(π/128))
    Q_8_8(-0.9296875),  // sin(207*(π/128))
    Q_8_8(-0.921875),   // sin(208*(π/128))
    Q_8_8(-0.9140625),  // sin(209*(π/128))
    Q_8_8(-0.90234375), // sin(210*(π/128))
    Q_8_8(-0.890625),   // sin(211*(π/128))
    Q_8_8(-0.87890625), // sin(212*(π/128))
    Q_8_8(-0.8671875),  // sin(213*(π/128))
    Q_8_8(-0.85546875), // sin(214*(π/128))
    Q_8_8(-0.84375),    // sin(215*(π/128))
    Q_8_8(-0.828125),   // sin(216*(π/128))
    Q_8_8(-0.81640625), // sin(217*(π/128))
    Q_8_8(-0.80078125), // sin(218*(π/128))
    Q_8_8(-0.78515625), // sin(219*(π/128))
    Q_8_8(-0.76953125), // sin(220*(π/128))
    Q_8_8(-0.75390625), // sin(221*(π/128))
    Q_8_8(-0.73828125), // sin(222*(π/128))
    Q_8_8(-0.72265625), // sin(223*(π/128))
    Q_8_8(-0.70703125), // sin(224*(π/128))
    Q_8_8(-0.6875),     // sin(225*(π/128))
    Q_8_8(-0.66796875), // sin(226*(π/128))
    Q_8_8(-0.65234375), // sin(227*(π/128))
    Q_8_8(-0.6328125),  // sin(228*(π/128))
    Q_8_8(-0.61328125), // sin(229*(π/128))
    Q_8_8(-0.59375),    // sin(230*(π/128))
    Q_8_8(-0.57421875), // sin(231*(π/128))
    Q_8_8(-0.5546875),  // sin(232*(π/128))
    Q_8_8(-0.53125),    // sin(233*(π/128))
    Q_8_8(-0.51171875), // sin(234*(π/128))
    Q_8_8(-0.4921875),  // sin(235*(π/128))
    Q_8_8(-0.46875),    // sin(236*(π/128))
    Q_8_8(-0.44921875), // sin(237*(π/128))
    Q_8_8(-0.42578125), // sin(238*(π/128))
    Q_8_8(-0.40234375), // sin(239*(π/128))
    Q_8_8(-0.37890625), // sin(240*(π/128))
    Q_8_8(-0.359375),   // sin(241*(π/128))
    Q_8_8(-0.3359375),  // sin(242*(π/128))
    Q_8_8(-0.3125),     // sin(243*(π/128))
    Q_8_8(-0.2890625),  // sin(244*(π/128))
    Q_8_8(-0.265625),   // sin(245*(π/128))
    Q_8_8(-0.2421875),  // sin(246*(π/128))
    Q_8_8(-0.21875),    // sin(247*(π/128))
    Q_8_8(-0.19140625), // sin(248*(π/128))
    Q_8_8(-0.16796875), // sin(249*(π/128))
    Q_8_8(-0.14453125), // sin(250*(π/128))
    Q_8_8(-0.12109375), // sin(251*(π/128))
    Q_8_8(-0.09765625), // sin(252*(π/128))
    Q_8_8(-0.0703125),  // sin(253*(π/128))
    Q_8_8(-0.046875),   // sin(254*(π/128))
    Q_8_8(-0.0234375),  // sin(255*(π/128))
    Q_8_8(0),           // sin(256*(π/128))
    Q_8_8(0.0234375),   // sin(257*(π/128))
    Q_8_8(0.046875),    // sin(258*(π/128))
    Q_8_8(0.0703125),   // sin(259*(π/128))
    Q_8_8(0.09765625),  // sin(260*(π/128))
    Q_8_8(0.12109375),  // sin(261*(π/128))
    Q_8_8(0.14453125),  // sin(262*(π/128))
    Q_8_8(0.16796875),  // sin(263*(π/128))
    Q_8_8(0.19140625),  // sin(264*(π/128))
    Q_8_8(0.21875),     // sin(265*(π/128))
    Q_8_8(0.2421875),   // sin(266*(π/128))
    Q_8_8(0.265625),    // sin(267*(π/128))
    Q_8_8(0.2890625),   // sin(268*(π/128))
    Q_8_8(0.3125),      // sin(269*(π/128))
    Q_8_8(0.3359375),   // sin(270*(π/128))
    Q_8_8(0.359375),    // sin(271*(π/128))
    Q_8_8(0.37890625),  // sin(272*(π/128))
    Q_8_8(0.40234375),  // sin(273*(π/128))
    Q_8_8(0.42578125),  // sin(274*(π/128))
    Q_8_8(0.44921875),  // sin(275*(π/128))
    Q_8_8(0.46875),     // sin(276*(π/128))
    Q_8_8(0.4921875),   // sin(277*(π/128))
    Q_8_8(0.51171875),  // sin(278*(π/128))
    Q_8_8(0.53125),     // sin(279*(π/128))
    Q_8_8(0.5546875),   // sin(280*(π/128))
    Q_8_8(0.57421875),  // sin(281*(π/128))
    Q_8_8(0.59375),     // sin(282*(π/128))
    Q_8_8(0.61328125),  // sin(283*(π/128))
    Q_8_8(0.6328125),   // sin(284*(π/128))
    Q_8_8(0.65234375),  // sin(285*(π/128))
    Q_8_8(0.66796875),  // sin(286*(π/128))
    Q_8_8(0.6875),      // sin(287*(π/128))
    Q_8_8(0.70703125),  // sin(288*(π/128))
    Q_8_8(0.72265625),  // sin(289*(π/128))
    Q_8_8(0.73828125),  // sin(290*(π/128))
    Q_8_8(0.75390625),  // sin(291*(π/128))
    Q_8_8(0.76953125),  // sin(292*(π/128))
    Q_8_8(0.78515625),  // sin(293*(π/128))
    Q_8_8(0.80078125),  // sin(294*(π/128))
    Q_8_8(0.81640625),  // sin(295*(π/128))
    Q_8_8(0.828125),    // sin(296*(π/128))
    Q_8_8(0.84375),     // sin(297*(π/128))
    Q_8_8(0.85546875),  // sin(298*(π/128))
    Q_8_8(0.8671875),   // sin(299*(π/128))
    Q_8_8(0.87890625),  // sin(300*(π/128))
    Q_8_8(0.890625),    // sin(301*(π/128))
    Q_8_8(0.90234375),  // sin(302*(π/128))
    Q_8_8(0.9140625),   // sin(303*(π/128))
    Q_8_8(0.921875),    // sin(304*(π/128))
    Q_8_8(0.9296875),   // sin(305*(π/128))
    Q_8_8(0.94140625),  // sin(306*(π/128))
    Q_8_8(0.94921875),  // sin(307*(π/128))
    Q_8_8(0.953125),    // sin(308*(π/128))
    Q_8_8(0.9609375),   // sin(309*(π/128))
    Q_8_8(0.96875),     // sin(310*(π/128))
    Q_8_8(0.97265625),  // sin(311*(π/128))
    Q_8_8(0.98046875),  // sin(312*(π/128))
    Q_8_8(0.984375),    // sin(313*(π/128))
    Q_8_8(0.98828125),  // sin(314*(π/128))
    Q_8_8(0.9921875),   // sin(315*(π/128))
    Q_8_8(0.9921875),   // sin(316*(π/128))
    Q_8_8(0.99609375),  // sin(317*(π/128))
    Q_8_8(0.99609375),  // sin(318*(π/128))
    Q_8_8(0.99609375),  // sin(319*(π/128))
};

// values of sin(x) as Q4.12 fixed-point numbers from x = 0° to x = 179°
const s16 gSineDegreeTable[] = {
    Q_4_12(0),              // sin(0°)
    Q_4_12(0.017333984375), // sin(1°)
    Q_4_12(0.034912109375), // sin(2°)
    Q_4_12(0.05224609375),  // sin(3°)
    Q_4_12(0.06982421875),  // sin(4°)
    Q_4_12(0.087158203125), // sin(5°)
    Q_4_12(0.1044921875),   // sin(6°)
    Q_4_12(0.121826171875), // sin(7°)
    Q_4_12(0.13916015625),  // sin(8°)
    Q_4_12(0.156494140625), // sin(9°)
    Q_4_12(0.173583984375), // sin(10°)
    Q_4_12(0.19091796875),  // sin(11°)
    Q_4_12(0.2080078125),   // sin(12°)
    Q_4_12(0.224853515625), // sin(13°)
    Q_4_12(0.241943359375), // sin(14°)
    Q_4_12(0.2587890625),   // sin(15°)
    Q_4_12(0.275634765625), // sin(16°)
    Q_4_12(0.29248046875),  // sin(17°)
    Q_4_12(0.30908203125),  // sin(18°)
    Q_4_12(0.32568359375),  // sin(19°)
    Q_4_12(0.342041015625), // sin(20°)
    Q_4_12(0.3583984375),   // sin(21°)
    Q_4_12(0.37451171875),  // sin(22°)
    Q_4_12(0.390625),       // sin(23°)
    Q_4_12(0.40673828125),  // sin(24°)
    Q_4_12(0.422607421875), // sin(25°)
    Q_4_12(0.4384765625),   // sin(26°)
    Q_4_12(0.4541015625),   // sin(27°)
    Q_4_12(0.469482421875), // sin(28°)
    Q_4_12(0.48486328125),  // sin(29°)
    Q_4_12(0.5),            // sin(30°)
    Q_4_12(0.51513671875),  // sin(31°)
    Q_4_12(0.530029296875), // sin(32°)
    Q_4_12(0.544677734375), // sin(33°)
    Q_4_12(0.55908203125),  // sin(34°)
    Q_4_12(0.573486328125), // sin(35°)
    Q_4_12(0.587890625),    // sin(36°)
    Q_4_12(0.601806640625), // sin(37°)
    Q_4_12(0.61572265625),  // sin(38°)
    Q_4_12(0.62939453125),  // sin(39°)
    Q_4_12(0.642822265625), // sin(40°)
    Q_4_12(0.656005859375), // sin(41°)
    Q_4_12(0.669189453125), // sin(42°)
    Q_4_12(0.681884765625), // sin(43°)
    Q_4_12(0.694580078125), // sin(44°)
    Q_4_12(0.70703125),     // sin(45°)
    Q_4_12(0.71923828125),  // sin(46°)
    Q_4_12(0.7314453125),   // sin(47°)
    Q_4_12(0.7431640625),   // sin(48°)
    Q_4_12(0.754638671875), // sin(49°)
    Q_4_12(0.76611328125),  // sin(50°)
    Q_4_12(0.777099609375), // sin(51°)
    Q_4_12(0.7880859375),   // sin(52°)
    Q_4_12(0.798583984375), // sin(53°)
    Q_4_12(0.80908203125),  // sin(54°)
    Q_4_12(0.819091796875), // sin(55°)
    Q_4_12(0.8291015625),   // sin(56°)
    Q_4_12(0.838623046875), // sin(57°)
    Q_4_12(0.84814453125),  // sin(58°)
    Q_4_12(0.857177734375), // sin(59°)
    Q_4_12(0.865966796875), // sin(60°)
    Q_4_12(0.87451171875),  // sin(61°)
    Q_4_12(0.883056640625), // sin(62°)
    Q_4_12(0.89111328125),  // sin(63°)
    Q_4_12(0.898681640625), // sin(64°)
    Q_4_12(0.90625),        // sin(65°)
    Q_4_12(0.91357421875),  // sin(66°)
    Q_4_12(0.92041015625),  // sin(67°)
    Q_4_12(0.92724609375),  // sin(68°)
    Q_4_12(0.93359375),     // sin(69°)
    Q_4_12(0.939697265625), // sin(70°)
    Q_4_12(0.945556640625), // sin(71°)
    Q_4_12(0.951171875),    // sin(72°)
    Q_4_12(0.956298828125), // sin(73°)
    Q_4_12(0.961181640625), // sin(74°)
    Q_4_12(0.9658203125),   // sin(75°)
    Q_4_12(0.97021484375),  // sin(76°)
    Q_4_12(0.974365234375), // sin(77°)
    Q_4_12(0.97802734375),  // sin(78°)
    Q_4_12(0.981689453125), // sin(79°)
    Q_4_12(0.98486328125),  // sin(80°)
    Q_4_12(0.98779296875),  // sin(81°)
    Q_4_12(0.990234375),    // sin(82°)
    Q_4_12(0.992431640625), // sin(83°)
    Q_4_12(0.994384765625), // sin(84°)
    Q_4_12(0.99609375),     // sin(85°)
    Q_4_12(0.99755859375),  // sin(86°)
    Q_4_12(0.99853515625),  // sin(87°)
    Q_4_12(0.999267578125), // sin(88°)
    Q_4_12(0.999755859375), // sin(89°)
    Q_4_12(1),              // sin(90°)
    Q_4_12(0.999755859375), // sin(91°)
    Q_4_12(0.999267578125), // sin(92°)
    Q_4_12(0.99853515625),  // sin(93°)
    Q_4_12(0.99755859375),  // sin(94°)
    Q_4_12(0.99609375),     // sin(95°)
    Q_4_12(0.994384765625), // sin(96°)
    Q_4_12(0.992431640625), // sin(97°)
    Q_4_12(0.990234375),    // sin(98°)
    Q_4_12(0.98779296875),  // sin(99°)
    Q_4_12(0.98486328125),  // sin(100°)
    Q_4_12(0.981689453125), // sin(101°)
    Q_4_12(0.97802734375),  // sin(102°)
    Q_4_12(0.974365234375), // sin(103°)
    Q_4_12(0.97021484375),  // sin(104°)
    Q_4_12(0.9658203125),   // sin(105°)
    Q_4_12(0.961181640625), // sin(106°)
    Q_4_12(0.956298828125), // sin(107°)
    Q_4_12(0.951171875),    // sin(108°)
    Q_4_12(0.945556640625), // sin(109°)
    Q_4_12(0.939697265625), // sin(110°)
    Q_4_12(0.93359375),     // sin(111°)
    Q_4_12(0.92724609375),  // sin(112°)
    Q_4_12(0.92041015625),  // sin(113°)
    Q_4_12(0.91357421875),  // sin(114°)
    Q_4_12(0.90625),        // sin(115°)
    Q_4_12(0.898681640625), // sin(116°)
    Q_4_12(0.89111328125),  // sin(117°)
    Q_4_12(0.883056640625), // sin(118°)
    Q_4_12(0.87451171875),  // sin(119°)
    Q_4_12(0.865966796875), // sin(120°)
    Q_4_12(0.857177734375), // sin(121°)
    Q_4_12(0.84814453125),  // sin(122°)
    Q_4_12(0.838623046875), // sin(123°)
    Q_4_12(0.8291015625),   // sin(124°)
    Q_4_12(0.819091796875), // sin(125°)
    Q_4_12(0.80908203125),  // sin(126°)
    Q_4_12(0.798583984375), // sin(127°)
    Q_4_12(0.7880859375),   // sin(128°)
    Q_4_12(0.777099609375), // sin(129°)
    Q_4_12(0.76611328125),  // sin(130°)
    Q_4_12(0.754638671875), // sin(131°)
    Q_4_12(0.7431640625),   // sin(132°)
    Q_4_12(0.7314453125),   // sin(133°)
    Q_4_12(0.71923828125),  // sin(134°)
    Q_4_12(0.70703125),     // sin(135°)
    Q_4_12(0.694580078125), // sin(136°)
    Q_4_12(0.681884765625), // sin(137°)
    Q_4_12(0.669189453125), // sin(138°)
    Q_4_12(0.656005859375), // sin(139°)
    Q_4_12(0.642822265625), // sin(140°)
    Q_4_12(0.62939453125),  // sin(141°)
    Q_4_12(0.61572265625),  // sin(142°)
    Q_4_12(0.601806640625), // sin(143°)
    Q_4_12(0.587890625),    // sin(144°)
    Q_4_12(0.573486328125), // sin(145°)
    Q_4_12(0.55908203125),  // sin(146°)
    Q_4_12(0.544677734375), // sin(147°)
    Q_4_12(0.530029296875), // sin(148°)
    Q_4_12(0.51513671875),  // sin(149°)
    Q_4_12(0.5),            // sin(150°)
    Q_4_12(0.48486328125),  // sin(151°)
    Q_4_12(0.469482421875), // sin(152°)
    Q_4_12(0.4541015625),   // sin(153°)
    Q_4_12(0.4384765625),   // sin(154°)
    Q_4_12(0.422607421875), // sin(155°)
    Q_4_12(0.40673828125),  // sin(156°)
    Q_4_12(0.390625),       // sin(157°)
    Q_4_12(0.37451171875),  // sin(158°)
    Q_4_12(0.3583984375),   // sin(159°)
    Q_4_12(0.342041015625), // sin(160°)
    Q_4_12(0.32568359375),  // sin(161°)
    Q_4_12(0.30908203125),  // sin(162°)
    Q_4_12(0.29248046875),  // sin(163°)
    Q_4_12(0.275634765625), // sin(164°)
    Q_4_12(0.2587890625),   // sin(165°)
    Q_4_12(0.241943359375), // sin(166°)
    Q_4_12(0.224853515625), // sin(167°)
    Q_4_12(0.2080078125),   // sin(168°)
    Q_4_12(0.19091796875),  // sin(169°)
    Q_4_12(0.173583984375), // sin(170°)
    Q_4_12(0.156494140625), // sin(171°)
    Q_4_12(0.13916015625),  // sin(172°)
    Q_4_12(0.121826171875), // sin(173°)
    Q_4_12(0.1044921875),   // sin(174°)
    Q_4_12(0.087158203125), // sin(175°)
    Q_4_12(0.06982421875),  // sin(176°)
    Q_4_12(0.05224609375),  // sin(177°)
    Q_4_12(0.034912109375), // sin(178°)
    Q_4_12(0.017333984375), // sin(179°)
};

// amplitude * sin(index*(π/128))
s16 Sin(s16 index, s16 amplitude) {
  return (amplitude * gSineTable[index]) >> 8;
}

// amplitude * cos(index*(π/128))
s16 Cos(s16 index, s16 amplitude) {
  return (amplitude * gSineTable[index + 64]) >> 8;
}

// angle in degrees
s16 Sin2(u16 angle) {
  s32 angleMod = angle % 180;
  s32 negate = ((angle / 180) & 1);
  s16 value = gSineDegreeTable[angleMod];

  if (negate)
    return -value;
  else
    return value;
}

// angle in degrees
s16 Cos2(u16 angle) { return Sin2(angle + 90); }
