make re
ARG="656 402 -664 654 345 604 868 994 -635 924 548 -468 681 220 925 445 -814 -32 -767 -764 737 -863 599 233 -548 968 -781 -516 -475 355 867 -765 -115 4 479 -688 708 -386 546 -16 975 501 -985 -425 -892 747 327 -174 721 -556 898 -242 -515 -841 -140 -961 -615 -272 -177 336 -591 -287 -225 -643 -501 119 796 816 572 204 374 -477 636 384 740 343 652 -119 439 -342 -188 -646 -219 100 672 -400 -89 917 668 -560 754 756 -794 -229 631 85 593 -41 936 -612 -704 -854 -399 -258 633 806 460 -239 528 -831 710 -807 -540 -491 893 707 -268 -960 498 -231 -562 634 -293 -159 -164 830 131 843 649 -336 545 -317 -347 54 124 70 618 -275 -817 -429 578 596 -551 -716 -209 -775 -796 -915 -617 736 496 -564 469 -129 171 -502 -505 -568 140 -238 -182 102 389 76 833 -277 -367 -772 -858 -409 446 -706 414 -529 354 919 -417 -18 -543 -326 26 719 -819 -667 303 -895 141 972 912 849 -495 -158 -593 980 137 -826 36 118 -341 -741 -750 467 -216 -703 298 69 -753 927 -281 -74 267 422 -390 -545 -959 777 -144 918 -91 -867 803 -320 -202 -17 406 -249 724 -782 -730 815 745 -507 582 -66 -662 -136 211 575 -295 677 613 544 -318 382 690 -575 732 769 451 -306 216 89 -65 136 202 316 -187 431 809 530 -655 226 -240 290 532 913 -660 -728 605 973 -388 -685 73 -799 72 616 669 213 188 413 321 -246 -70 800 395 963 793 729 -518 974 -403 -804 -235 971 -528 -533 -71 3 94 892 703 -714 -719 789 700 198 -595 -48 514 -207 438 159 -744 -45 -790 -148 257 645 484 684 -189 -825 502 -909 679 84 367 -614 742 891 827 -816 -497 -628 -708 -760 -379 -898 848 753 -645 674 130 -173 -300 823 -830 -397 683 567 13 -354 696 -154 559 704 685 -3 -945 749 415 -950 -332 -185 25 826 -286 -513 -337 -500 -351 -651 985 147 -808 -149 701 292 -943 -942 -971 485 813 697 -908 -846 17 -361 245 -156 676 -373 -383 -407 -442 589 -886 755 -376 -917 457 351 967 882 -883 511 -888 509 586 -464 660 -946 -141 -206 752 490 489 560 982 428 256 -443 -230 14 117 -37 775 938 774 264 -434 -103 -901 -123 449 40 -197 246 -265 987 22 453 466 -19 879 819 186 294 894 190 641 59 -853 -583 -413 -715 -798 947 -530 929 -6 258 352 228 932 -415 262 -990 -785 356 -547 -880 409 -191 507 564 401 81 32 -106 125 -947 -871 -555 922 -557 -567 128 874 33 -559 148 930 -264 -372 583 90 -828 -121 330"
./push_swap $ARG > spam.txt
wc -l spam.txt
./push_swap $ARG | ./checker_linux $ARG
echo ""
ARG="579 795 -575 -356 915 -269 -988 550 -903 -571 848 -125 -225 -406 -47 -104 227 905 -272 -190 -487 -261 -123 108 752 -133 182 141 -940 544 857 -828 120 -63 615 294 236 -686 289 245 509 -433 -994 -904 312 -863 -410 698 958 310 -533 -950 -611 384 -803 645 -590 -491 -347 440 -13 35 -989 -384 -343 640 -372 -744 305 918 656 -88 641 -204 -691 -843 456 135 137 -879 -526 133 -777 -739 779 807 -561 234 285 677 541 -287 -418 -527 -971 -471 -522 290 382 -948 -658 -898 505 -388 363 879 216 115 968 957 -71 -483 -519 -241 -183 -925 313 -591 -674 348 -315 466 -782 888 -74 821 -849 -246 419 -830 -232 -735 -494 571 -35 475 -379 603 -29 967 -461 865 142 307 -727 851 -826 931 -944 565 -793 188 788 676 43 730 -39 97 -772 76 -234 241 174 -37 446 34 808 986 -495 573 345 -549 -268 -453 683 -353 829 -205 -509 439 -613 -252 -845 189 694 980 -375 60 972 -147 862 426 -563 -959 -193 -53 696 98 94 -279 -143 -288 570 89 749 -555 -928 584 361 -781 -391 707 607 768 878 -836 -194 -187 79 -404 -430 892 889 -403 674 353 101 219 566 -909 904 238 785 898 733 556 -973 128 -264 -396 -349 378 528 567 246 -824 -540 148 -695 880 576 -320 -177 52 -702 -645 70 -960 611 -401 815 184 624 -671 -761 309 139 -981 -766 -713 -126 -816 -409 -97 -9 -12 -332 985 -862 700 -700 913 286 -515 104 -998 272 919 934 822 -115 -479 154 149 -200 -581 186 -705 283 626 -159 -437 651 -164 -594 743 15 -861 -689 591 646 -941 -273 897 540 24 218 -374 -376 -780 -334 -651 -392 -277 -819 50 -936 -551 637 483 -201 704 -329 -835 954 -58 712 -423 122 -958 672 935 -569 -85 981 -45 -779 16 -634 -595 887 -119 -395 -338 777 197 710 207 393 262 -956 416 304 -703 572 695 -476 820 801 -76 -428 831 448 592 -113 -688 -15 991 -490 -304 432 -422 671 190 375 -979 -820 63 -160 -672 789 -440 911 649 -108 925 205 -640 -109 669 381 602 -8 -750 909 -25 44 -474 -419 810 -496 728 27 450 -598 -7 -498 -996 -905 402 -408 775 51 451 767 709 28 837 -511 -704 797 -881 773 191 978 564 -562 420 -176 -720 983 -850 -78 -785 883 518 -631 893 -321 -466 -116 711 -256 146 -800 -369 -462 745 -351 -278 150 780 -546 404 859 748 -325 -778 -458 -455 -894 965 459 -62 843 306 -444 -833 717 -746 -895 791 -623 596 -96 -542 764 -57 -538 -614 -61 75 964 861 265 436 955 999 -154 264"
./push_swap $ARG > spam.txt
wc -l spam.txt
./push_swap $ARG | ./checker_linux $ARG
echo ""
ARG="619 212 317 964 638 439 315 579 -43 302 191 -315 -442 -659 342 772 -190 450 -561 873 123 -721 -151 -650 471 400 -996 481 955 175 252 686 965 -790 899 218 -640 -4 9 417 915 940 16 581 309 459 -201 -622 -913 567 499 441 -502 -390 -412 -60 -632 768 -643 -743 324 881 275 259 591 649 -872 265 353 364 -59 -82 211 -959 69 -364 796 -680 -353 487 -775 -559 762 -65 194 710 801 446 -713 -971 866 92 910 946 -384 -354 813 -755 -938 -128 14 -102 -23 -132 -493 -859 912 -715 437 858 628 433 933 -583 385 733 266 -296 128 614 -653 -234 -359 308 -878 -452 -483 48 -110 -382 577 -928 -342 -894 -73 -310 371 423 -552 -558 -395 122 -506 782 226 925 631 -125 585 -686 931 757 -700 -903 -34 -575 -103 -952 23 -180 -980 219 126 4 908 -263 334 50 100 -675 200 707 -139 -682 40 966 -481 178 -8 -584 -697 -208 -550 34 237 545 442 833 -934 183 736 -260 728 45 -555 620 216 -576 -72 -488 -665 -884 -21 -774 -185 -52 -826 24 615 626 775 384 -660 -79 -170 -434 -705 -431 998 674 -345 376 -972 -887 -796 -964 -768 316 883 -601 -405 673 -118 -299 639 810 528 37 642 518 -652 -174 600 -870 -433 592 -633 -271 689 -213 -63 702 501 798 -620 975 -646 -355 494 164 -786 -408 -599 474 -519 5 -366 921 -687 -624 845 322 -318 -317 -476 -309 -9 333 542 244 723 530 693 -508 -432 999 -398 -282 -261 -480 540 -255 -792 272 -336 986 488 -803 -758 692 -770 331 601 -591 -657 718 93 298 934 197 -448 32 731 105 356 993 624 653 -186 677 -347 -197 -729 -258 145 -744 901 -161 -64 -511 -961 -242 571 -602 -893 -562 20 -593 224 811 849 323 605 103 381 -730 -685 764 -254 -937 637 -339 950 -335 -607 35 -512 996 935 -816 806 737 65 663 -396 104 268 823 970 470 697 -604 -753 -748 -89 -473 -712 273 -357 -237 671 409 239 177 676 -120 -251 -165 918 -198 860 -750 382 408 -362 852 978 974 -160 -644 97 -232 421 -691 258 -647 -17 -833 -547 -305 680 296 -429 -515 492 548 -183 372 230 410 33 582 119 618 -445 -960 388 -714 -267 -94 842 -586 -847 835 380 561 495 432 -523 -257 -145 1000 834 155 807 -369 750 -618 785 498 -385 -76 89 -129 -294 -498 485 735 -48 -410 435 590 -834 -53 -892 245 -333 -798 610 -414 -745 -773 -719 538 -178 -578 299 445 -70 936 802 924 107 -944 805 -351 -217 -44 -807 330 -328 -427 537 102 -895 -158 -812 988 664 217"
./push_swap $ARG > spam.txt
wc -l spam.txt
./push_swap $ARG | ./checker_linux $ARG
rm -rf spam.txt