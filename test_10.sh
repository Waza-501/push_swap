make re
ARG="303 665 846 500 678 -440 -888 487 346 -364"
./push_swap $ARG
echo ""
./push_swap $ARG | wc -l
echo ""
./push_swap $ARG | ./checker_linux $ARG
ARG="-573 341 731 -603 -435 -121 -638 -509 -85 -578"
./push_swap $ARG > spam.txt
echo ""
./push_swap $ARG | wc -l
echo ""
./push_swap $ARG | ./checker_linux $ARG
ARG="-142 141 -764 -292 510 318 -597 727 650 -92"
./push_swap $ARG > spam.txt
echo ""
./push_swap $ARG | wc -l
echo ""
./push_swap $ARG | ./checker_linux $ARG
ARG="199 773 -320 653 -11 571 628 514 381 743"
./push_swap ARG > spam.txt
echo ""
./push_swap ARG | wc -l
echo ""
./push_swap $ARG | ./checker_linux $ARG