int i2;
double d2;
char s2[100]; 

scanf("%d", &i2);
scanf("%lf", &d2);
scanf("%*[
] %[^
]", s2); // trashing the first newline by %*[
] and then reading everything till newline but not newline
                           // '*' is 'assignment suppression'
printf("%d
", i + i2);
printf("%.01lf
", d + d2);
printf("%s%s", s, s2);
