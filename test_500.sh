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
echo ""
ARG="-2246 -2340 -2223 5064 2916 -3834 -2108 4261 -6053 1270 5886 1385 300 -377 1831 4501 1785 3083 8567 -4933 3827 -9388 8080 -5801 8860 -7292 4044 3809 9125 -3761 5416 -931 -4153 1998 -1099 4148 7143 -3906 -6263 -1218 2964 -2728 5176 3917 8339 -4262 5748 7267 -4130 7926 5849 4118 -7120 2857 337 652 834 -7880 6411 -2341 -354 255 -9146 2468 434 -1930 -6077 4947 4490 6020 6200 3032 4082 1107 -8686 9654 4727 4850 6667 8055 4375 3535 -7741 -2644 -5451 -6266 -6541 5192 -8452 3649 9091 -3032 -4822 -2122 -7297 3390 1127 -9413 1224 -7227 3329 4018 5540 5452 8678 562 -2971 4205 -5212 5730 -7307 -9721 -2364 -801 6399 -2472 9907 6702 -5092 5728 -9523 9019 4075 -7231 -9359 6450 -8303 -8991 -2312 7001 2844 7038 4146 5224 -7925 7579 9735 -2516 -4574 5127 -209 3172 -9564 -1210 6127 452 6476 6028 -1299 5564 8799 -1531 -1668 -5963 -1166 -9438 -8978 1741 1197 -7660 -7248 7484 -5738 430 -6784 -1718 6311 1499 453 7335 3247 1449 7145 4703 -4173 -6146 5251 6267 -4469 -4285 6679 -7004 -4435 -3374 4463 -6046 -2240 9103 6032 4125 9178 2491 -1120 -4353 5290 1493 7958 -5568 -5679 3856 -6184 3383 -7599 7265 4678 -9466 250 -1329 7290 -405 -2194 9141 -144 -5119 -8600 -9337 3081 5131 1474 7623 2399 9282 -6308 -3023 -2342 -6853 1624 7074 -3230 65 5704 6417 -9935 4203 -5460 1619 2390 -8267 3780 -5079 4193 1638 6243 -6835 -759 5072 -255 -9716 -6447 -7789 -5883 4291 6563 4300 9556 -3221 -1271 -3698 5442 -8135 7600 3773 3731 -1812 3072 -1379 4744 9615 2060 513 -7832 -1996 8676 1093 714 9201 1932 -1523 1699 -4256 1146 -6733 -5573 4519 -5780 -8153 -4901 -5498 -6221 -4764 6958 -8166 3370 8870 -4518 -6464 4806 7150 -2141 2836 6176 -1259 -1578 -5192 -8214 6548 8140 4252 -9424 -6745 2400 5956 -9557 7923 -2813 1572 7517 9610 1247 -5160 -4217 7472 7765 -1532 -3758 -1674 263 -5565 -164 -2687 8733 1017 -1997 2905 -6350 -3813 8048 9989 9688 -8963 -588 -7764 -8277 4976 -4485 -6446 -5246 5238 7939 -5240 8421 5150 -2151 4264 8056 8600 9379 -7775 4715 -5238 -5197 5798 -9262 -3763 1084 9977 -6820 6319 -3831 8459 -9282 9330 -2393 5268 -2104 6915 -8032 2121 9748 2226 7664 -2301 -2181 9191 7513 318 -6413 6781 -1542 9894 8304 -9670 -5350 6643 -2598 -6343 9166 9427 -5509 9601 -3932 3226 -777 -6771 8615 3405 -579 -6956 -5118 3368 -5616 2316 2756 8039 -819 3901 -9688 -1359 -8565 -2651 -9184 177 9262 3629 8329 4646 -9593 4584 1924 4426 -9060 -7198 -1464 5834 1648 28 8658 -798 9328 283 -6867 -3590 8509 -3889 5964 -4216 -1725 -2386 -4819 -6950 -1619 -5417 3719 9929 898 8030 3293 4133 5933 -4326 -9071 3353 3241 2297 8496 -6000 9655 -6019 1652 3042 -7666 -7006 -2969 -1136 -7269 -9654 1155 -1533 7282 1589 3146 -4434 3667 -9263 603 8718 9631 -9692 9725 -3786 4892 -520 -6714 6069 -5235 4871 -4563 2092 -6725 -8949"
./push_swap $ARG > spam.txt
wc -l spam.txt
./push_swap $ARG | ./checker_linux $ARG
echo ""
ARG="-6293 8101 2033 -4873 -4222 620 -3041 -5220 -8867 3773 -1127 7914 9889 1333 6738 6804 -6410 -2847 -2313 2156 5272 -109 271 5662 -2487 6867 5897 2423 4333 -6298 755 2038 7971 925 7994 2402 -8728 -8664 -1857 5371 -6218 4894 2920 -3463 5487 2264 -418 6156 9932 -4707 -7973 -78 -6745 -7741 -8118 -7782 -2681 -3652 9632 -9463 6877 -8202 4112 888 8994 3381 -5269 4500 -4810 7121 1320 -8413 4302 -45 -2350 -9556 4273 -4266 6299 3373 -6869 8697 5938 -5358 9143 -7038 -6002 4423 -3209 6663 -3272 -5153 4463 476 -4851 250 2577 -5899 2771 373 -327 5251 5231 17 -5236 9082 -8314 -9667 8433 4775 -3167 -8983 697 -4077 -5417 2211 6395 5322 8720 3347 4815 3400 -2679 -9957 -6650 -2049 -8060 8678 -8503 2279 5752 -7170 3774 9581 -8325 -3619 4322 -4665 -4949 -9804 -4585 7014 -320 -5696 -1408 -9001 2495 1350 6970 -6210 -1056 5697 9017 -427 2634 9192 -8968 7659 -6874 4790 2447 711 4127 -4649 5424 -8107 -2418 -6461 -3106 -2955 -7135 5920 4619 5775 5060 -9425 5974 -8985 -4201 2987 7355 -4523 4566 -8075 2619 4571 9898 -2383 8535 4509 -4699 6445 -4534 -6202 -4205 9039 7486 -4590 7149 8963 9940 -9389 -4859 67 -7669 -1734 -2073 -8043 923 -814 -1007 -726 -7884 -1780 7651 -3133 8473 5670 9211 4424 -5449 -436 -9758 6940 3971 -7869 8495 3313 -3246 -8159 6801 -5082 -4026 9152 -262 5207 -2 -1965 9086 -4741 -8946 9509 724 -3031 7004 8489 -9170 9676 9510 7602 -3429 4988 -6436 -1526 8299 1874 6034 3118 -601 -5139 -2685 2488 -5448 -6566 452 -4217 3919 5936 -6339 1059 -3926 -68 -4575 -9505 2508 -9600 5460 2469 -7873 -4140 4777 -3701 7889 -6011 6666 6381 2223 92 8467 -9893 -6617 299 -1706 -2240 6141 4683 6120 9894 -8365 7551 -8407 6965 3376 5711 -2934 5277 -3954 7099 6346 3784 4858 -1923 -7203 5780 4453 -130 -5952 -2140 352 -9150 1287 -2938 -4757 -3569 -239 2642 -7871 -6017 -5644 -3675 2839 -2666 -8666 6123 -5588 4583 7766 1119 -1279 6450 4712 1389 -7725 -7607 -434 7849 -7651 7821 8825 2689 -5804 3208 -7249 1378 -3367 -1825 -7191 4622 3487 7272 -7298 5311 5475 2492 9266 4178 -2802 983 1514 -1140 7894 -6879 8191 -6667 -2611 4896 8042 -7979 6377 8293 7454 -8698 -9699 8896 9326 -7719 9955 2139 -7107 -642 -7560 2636 -9073 8063 -8855 7784 3258 -2785 -1613 -7067 2789 8237 3724 -1362 -4748 -9210 -5161 -9961 8669 -537 1322 -6444 -3712 -3378 5473 7187 -4006 -2456 -1244 1065 -3355 915 5831 -503 122 72 5120 8759 -4342 3201 -1740 -7255 725 -6189 -6990 3085 6811 -1935 -6275 -9007 -6920 814 570 9712 5386 -4403 -9055 -1411 -9305 -3339 -2824 6168 9146 -6170 8492 5580 5726 -6898 9645 746 9149 -7528 5761 -6911 7871 3342 4846 2413 -4135 8291 -518 5062 -2866 5809 1760 551 -1275 -5791 9085 2654 -8710 -2242 -7118 -1573 9111 1030 2128 2064 -6172 -533 5332 8682 5557 5667 -5796 -751 -6174 -6016 8215 7882"
./push_swap $ARG > spam.txt
wc -l spam.txt
./push_swap $ARG | ./checker_linux $ARG
echo ""
ARG="-3420 -9912 -5525 9054 273 6563 5118 -6149 9627 -1919 9837 4717 -7471 -6679 8454 1191 8339 -7876 -5715 1338 -4770 -9871 -2099 3755 -6569 4513 7816 -4833 7947 3621 2143 7997 7196 -1794 -4935 -5844 -631 -5496 7943 -9481 -3411 -6592 8455 4751 9528 -308 -3599 6357 -3263 9492 7933 948 1550 -3986 9693 -6274 -3484 3645 8935 -4807 6223 -8531 5724 -1941 -1030 -8959 -4775 -9847 2573 -4614 -611 6341 -2963 3273 9358 -3717 -9557 -1329 -7758 -9335 1489 -3398 9992 -1196 8718 5961 1932 7524 -1405 -6303 -2729 1630 -3836 5512 -3537 48 -1966 9532 -9386 -4330 7264 782 5121 9384 -5704 -5097 -4377 -5651 5114 -4777 8933 8402 -9727 8038 -5075 -787 -6086 2519 -7941 9447 1857 -2828 -8065 3184 -797 7389 -6449 8165 -5458 -4869 -4080 -1856 -4120 -5307 -2699 252 -5079 2249 1875 -303 4246 -1286 8726 -8745 -695 6720 4768 -7668 63 8336 -7703 -6117 -6332 6736 1311 2958 -1327 -5697 97 6845 -85 -3832 -1913 -6131 5876 -6591 4271 7474 6507 8358 -5644 -8790 -6827 5035 -5907 -7979 3580 -5859 -51 9784 9361 -872 1683 -8098 -4831 5723 815 5732 -9437 -8706 9633 5444 6137 1781 -4360 -8882 -5104 -4848 6530 -8981 -6284 -2609 6364 9773 2898 5252 -2395 3747 -5119 -7214 5347 5988 -5709 -2923 3402 -5989 8056 -6949 -7634 -2538 1933 -5631 -7104 -4685 -7543 -7082 8034 -333 1147 -8386 9545 7529 8971 2493 1367 7924 -3171 3193 6872 -3990 -317 -6581 -8017 7485 6652 6664 -8405 4583 -5495 -5029 6033 9069 -3259 8578 6790 -6689 5061 7199 6784 5485 -4646 -4583 -3075 1525 1754 -1099 -2061 2909 -8873 -9534 8644 5579 -4513 -9263 4521 7834 2443 -2412 5563 -3199 -6389 -180 -8240 9632 8855 2730 -1497 4384 8458 -7973 -2323 -2577 -3721 672 8067 -3778 -8732 8653 7110 -3677 -8083 687 -4837 8867 -2181 -5759 -2971 5272 -3708 7243 -7347 3938 -440 -2102 7881 -4726 -7441 -6537 797 -752 8712 3336 -8708 -1025 -804 6694 -9287 -9304 7020 3598 -3147 -6350 2036 -823 4453 -2955 -7632 -8928 8496 5477 8895 798 4032 -3302 -4757 9527 1735 3253 351 4031 8392 -105 1187 2735 3373 2178 7341 -5103 -5726 -1713 6136 6768 -9549 9000 -971 5829 -236 -431 4960 2284 1245 -4657 8723 -325 -8154 -8267 -1601 -5439 6143 4234 -7127 8288 -6850 9790 -3141 -8960 8787 4394 -4841 -6975 9095 -7766 -3064 -4704 -9177 1992 -9235 4203 -9250 5774 -189 -7555 -932 -5599 7338 8985 337 -1958 4173 -649 2305 -7184 2854 656 -3824 6643 -6383 6264 5304 2018 2978 2999 -2071 3780 3048 -9605 6328 -8259 4729 -5171 5113 -1213 -2326 -192 6312 2784 -8996 163 -155 7607 2838 -137 -6058 1964 -329 -1648 -7227 -9880 6336 1483 -6319 1439 -5224 5631 6516 -9964 1929 -8364 187 3620 -5579 700 -2463 7281 -6353 1711 -3373 -1865 9215 7148 -8421 3878 -7997 2165 2085 -4075 -3512 955 5748 3557 7786 -1333 -176 5526 4 347 3565 -4754 -2867 -8701 -8035 -1388 -4376 4331 3283 8194 7079 -7273 -3649 8198"
./push_swap $ARG > spam.txt
wc -l spam.txt
./push_swap $ARG | ./checker_linux $ARG
rm -rf spam.txt