#include \
<iostream>
#include \
<cmath>
using
namespace
std
;
float
iio
(
float
O1
[
]
)
;
int
lo
(
)
{
int
Oo
;
float
O1
[
012
]
;
cout
<<
"\105n\164e\162\040\0610 \145l\145ment\163:\040"
;
for
(
Oo
=
0
;
Oo
<
012
;
++
Oo
)
cin
>>
O1
[
Oo
]
;
cout
<<
endl
<<
"\123t\141nd\141rd \104\145vi\141t\151o\156\040=\040"
<<
iio
(
O1
)
;
return
0
;
}
float
iio
(
float
O1
[
]
)
{
float
Iio
=
.00000000000000
,
lio
,
OIo
=
0000000000.
;
int
Oo
;
for
(
Oo
=
0
;
Oo
<
012
;
++
Oo
)
{
Iio
+=
O1
[
Oo
]
;
}
lio
=
Iio
/
012
;
for
(
Oo
=
0
;
Oo
<
012
;
++
Oo
)
OIo
+=
pow
(
O1
[
Oo
]
-
lio
,
02
)
;
return
sqrt
(
OIo
/
012
)
;
}
