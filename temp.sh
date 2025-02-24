make re
ARG="1 a 3"
./push_swap.a $ARG > spam.txt
echo ""
ARG="1 3 1"
./push_swap.a $ARG > spam.txt
echo ""
ARG="1 0 -0"
./push_swap.a $ARG > spam.txt
echo ""
ARG=" "
./push_swap.a $ARG > spam.txt
echo ""
ARG="1 2 3 4 5"
./push_swap.a $ARG > spam.txt
echo ""
ARG="enter your test here"
./push_swap.a $ARG > spam.txt
echo ""