#include \
<iostream>
using
namespace
std
;
void
o1
(
int
i1
[
]
[
012
]
,
int
I1
[
]
[
012
]
,
int
l1
,
int
OOo
,
int
oOo
,
int
iOo
)
;
void
IOo
(
int
i1
[
]
[
012
]
,
int
I1
[
]
[
012
]
,
int
lOo
[
]
[
012
]
,
int
l1
,
int
OOo
,
int
oOo
,
int
iOo
)
;
void
Ooo
(
int
ooo
[
]
[
012
]
,
int
l1
,
int
iOo
)
;
int
lo
(
)
{
int
i1
[
012
]
[
012
]
,
I1
[
012
]
[
012
]
,
ooo
[
012
]
[
012
]
,
l1
,
OOo
,
oOo
,
iOo
,
Oo
,
o0
,
ioo
;
cout
<<
"\105nter rows\040\141n\144 \143ol\165mn\040fo\162\040\146ir\163\164\040\155\141t\162ix: "
;
cin
>>
l1
>>
OOo
;
cout
<<
"\105\156\164\145r r\157\167\163\040a\156d\040\143\157l\165\155\156\040f\157\162\040secon\144\040mat\162\151x\072 "
;
cin
>>
oOo
>>
iOo
;
while
(
OOo
!=
oOo
)
{
cout
<<
"\105\162r\157\162\041 \143ol\165\155\156 o\146 \146\151r\163\164\040\155\141\164r\151x \156\157\164\040\145\161u\141\154 to\040ro\167 of\040\163e\143o\156d."
<<
endl
;
cout
<<
"Enter\040\162ow\163\040an\144 c\157\154\165mn\040\146o\162\040\146ir\163t \155\141\164rix\072\040"
;
cin
>>
l1
>>
OOo
;
cout
<<
"\105\156ter ro\167\163 and\040col\165\155n f\157r\040sec\157\156d mat\162i\170: "
;
cin
>>
oOo
>>
iOo
;
}
o1
(
i1
,
I1
,
l1
,
OOo
,
oOo
,
iOo
)
;
IOo
(
i1
,
I1
,
ooo
,
l1
,
OOo
,
oOo
,
iOo
)
;
Ooo
(
ooo
,
l1
,
iOo
)
;
return
0
;
}
void
o1
(
int
i1
[
]
[
012
]
,
int
I1
[
]
[
012
]
,
int
l1
,
int
OOo
,
int
oOo
,
int
iOo
)
{
int
Oo
,
o0
;
cout
<<
endl
<<
"En\164e\162 e\154ement\163 of\040\155\141trix 1\072"
<<
endl
;
for
(
Oo
=
0
;
Oo
<
l1
;
++
Oo
)
{
for
(
o0
=
0
;
o0
<
OOo
;
++
o0
)
{
cout
<<
"Enter \145\154\145me\156\164s\040\141"
<<
Oo
+
01
<<
o0
+
01
<<
": "
;
cin
>>
i1
[
Oo
]
[
o0
]
;
}
}
cout
<<
endl
<<
"Ent\145r\040e\154e\155\145\156ts\040\157\146 m\141tr\151x\040\062\072"
<<
endl
;
for
(
Oo
=
0
;
Oo
<
oOo
;
++
Oo
)
{
for
(
o0
=
0
;
o0
<
iOo
;
++
o0
)
{
cout
<<
"\105\156t\145r e\154\145\155en\164\163\040b"
<<
Oo
+
01
<<
o0
+
01
<<
": "
;
cin
>>
I1
[
Oo
]
[
o0
]
;
}
}
}
void
IOo
(
int
i1
[
]
[
012
]
,
int
I1
[
]
[
012
]
,
int
ooo
[
]
[
012
]
,
int
l1
,
int
OOo
,
int
oOo
,
int
iOo
)
{
int
Oo
,
o0
,
ioo
;
for
(
Oo
=
0
;
Oo
<
l1
;
++
Oo
)
{
for
(
o0
=
0
;
o0
<
iOo
;
++
o0
)
{
ooo
[
Oo
]
[
o0
]
=
0
;
}
}
for
(
Oo
=
0
;
Oo
<
l1
;
++
Oo
)
{
for
(
o0
=
0
;
o0
<
iOo
;
++
o0
)
{
for
(
ioo
=
0
;
ioo
<
OOo
;
++
ioo
)
{
ooo
[
Oo
]
[
o0
]
+=
i1
[
Oo
]
[
ioo
]
*
I1
[
ioo
]
[
o0
]
;
}
}
}
}
void
Ooo
(
int
ooo
[
]
[
012
]
,
int
l1
,
int
iOo
)
{
int
Oo
,
o0
;
cout
<<
"O\165\164p\165t\040\115at\162i\170:"
<<
endl
;
for
(
Oo
=
0
;
Oo
<
l1
;
++
Oo
)
{
for
(
o0
=
0
;
o0
<
iOo
;
++
o0
)
{
cout
<<
ooo
[
Oo
]
[
o0
]
<<
" "
;
if
(
o0
==
iOo
-
01
)
cout
<<
endl
<<
endl
;
}
}
}
