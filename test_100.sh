make re
ARG="-962 283 -274 -228 -699 408 -574 -433 850 24 192 187 907 -839 382 722 -627 -439 -13 190 -921 186 155 -919 -737 -167 167 932 251 -356 905 917 161 -406 166 900 -336 694 -968 810 -540 -901 247 -547 911 -900 -315 221 962 345 -680 -447 -185 -597 -15 555 -888 103 544 -66 531 983 -785 -604 230 847 -408 523 -632 -126 -23 57 -142 863 912 56 6 -829 -116 -696 -812 55 373 495 -930 801 -830 561 -580 964 -37 235 779 475 764 885 488 -886 473 -642"
echo ""
./push_swap.a $ARG > demo.txt
./push_swap.a $ARG | wc -l
./push_swap.a $ARG | ./checker_linux $ARG