#include "square.h"
#include "colour.h"

 const int  SquareFrom90[90]=
{
	A0,	B0,	C0,	D0,	E0,	F0,	G0,	H0,	I0,
	A1,	B1,	C1,	D1,	E1,	F1,	G1,	H1,	I1,
	A2,	B2,	C2,	D2,	E2,	F2,	G2,	H2,	I2,
	A3,	B3,	C3,	D3,	E3,	F3,	G3,	H3,	I3,
	A4,	B4,	C4,	D4,	E4,	F4,	G4,	H4,	I4,
	A5,	B5,	C5,	D5,	E5,	F5,	G5,	H5,	I5,
	A6,	B6,	C6,	D6,	E6,	F6,	G6,	H6,	I6,
	A7,	B7,	C7,	D7,	E7,	F7,	G7,	H7,	I7,
	A8,	B8,	C8,	D8,	E8,	F8,	G8,	H8,	I8,
	A9,	B9,	C9,	D9,	E9,	F9,	G9,	H9,	I9
};
 const int    SquareTo90[SquareNb]=
{
	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,
	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,
	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,
	-1,	-1,	-1,	0,	1,	2,	3,	4,	5,	6,	7,	8,	-1,	-1,	-1,	-1,
	-1,	-1,	-1,	9,	10,	11,	12,	13,	14,	15,	16,	17,	-1,	-1,	-1,	-1,
	-1,	-1,	-1,	18,	19,	20,	21,	22,	23,	24,	25,	26,	-1,	-1,	-1,	-1,
	-1,	-1,	-1,	27,	28,	29,	30,	31,	32,	33,	34,	35,	-1,	-1,	-1,	-1,
	-1,	-1,	-1,	36,	37,	38,	39,	40,	41,	42,	43,	44,	-1,	-1,	-1,	-1,
	-1,	-1,	-1,	45,	46,	47,	48,	49,	50,	51,	52,	53,	-1,	-1,	-1,	-1,
	-1,	-1,	-1,	54,	55,	56,	57,	58,	59,	60,	61,	62,	-1,	-1,	-1,	-1,
	-1,	-1,	-1,	63,	64,	65,	66,	67,	68,	69,	70,	71,	-1,	-1,	-1,	-1,
	-1,	-1,	-1,	72,	73,	74,	75,	76,	77,	78,	79,	80,	-1,	-1,	-1,	-1,
	-1,	-1,	-1,	81,	82,	83,	84,	85,	86,	87,	88,	89,	-1,	-1,	-1,	-1,
	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,
	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,
	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1,	-1
};

const int  CityHist[256]=
{
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	4,	3,	1,	3,	4,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	1,	3,	1,	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	4,	0,	0,	3,	5,	3,	0,	0,	4,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	4,	0,	0,	0,	4,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	4,	0,	0,	0,	4,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	4,	0,	0,	3,	5,	3,	0,	0,	4,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	1,	3,	1,	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	4,	3,	1,	3,	4,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,
	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,	0,
};