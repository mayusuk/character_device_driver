Team -5 
Name - Mayur Khandave  ASU ID - 1215090188
Name - Bhupinder Singh   ASU ID - 1215098443



# character_device_driver
Character device driver with implementation of hashtable


Steps to build code -


1) sudo make
2) scp kprobe.ko hashtable ht530_drv.ko IP_OF_GALILEO:/home/root
3) insmod kprobe.ko
4) insmod ht530_drv.ko
5) ./hashtable
	a) It will ask for the offset of the write function where you want to add kprobe

Sample Output -


Node inserted with key 69 and value 86
Node inserted with key 80 and value 115
Node inserted with key 27 and value 55
Node inserted with key 106 and value 72
Node inserted with key 23 and value 21
Node inserted with key 46 and value 27
Node inserted with key 97 and value 19
Node inserted with key 28 and value 46
Node inserted with key 114 and value 106
Node inserted with key 3 and value 16
Node inserted with key 96 and value 68
Node inserted with key 100 and value 69
Node inserted with key 40 and value 50
Node inserted with key 124 and value 83
Node inserted with key 29 and value 15
Node inserted with key 64 and value 2
Node inserted with key 108 and value 18
Node inserted with key 40 and value 27
Node inserted with key 137 and value 56
Node inserted with key 30 and value 2
Node inserted with key 77 and value 73
Node inserted with key 107 and value 119
Node inserted with key 44 and value 37
Node inserted with key 106 and value 44
Node inserted with key 18 and value 10
Node inserted with key 51 and value 26
Node inserted with key 102 and value 20
Node inserted with key 45 and value 33
Node inserted with key 140 and value 130
Node inserted with key 15 and value 1
Node inserted with key 63 and value 25
Node inserted with key 106 and value 87
Node inserted with key 31 and value 5
Node inserted with key 127 and value 109
Node inserted with key 36 and value 17
Node inserted with key 66 and value 95
Node inserted with key 114 and value 105
Node inserted with key 45 and value 27
Node inserted with key 114 and value 84
Node inserted with key 17 and value 30
Node inserted with key 68 and value 8
Node inserted with key 116 and value 98
Node inserted with key 44 and value 24
Node inserted with key 129 and value 51
Node inserted with key 32 and value 39
Node inserted with key 42 and value 60
Node inserted with key 116 and value 48
Node inserted with key 44 and value 52
Node inserted with key 110 and value 6
Node inserted with key 16 and value 19
Node inserted with key 81 and value 70
Node inserted with key 88 and value 58
Node inserted with key 43 and value 21
Node inserted with key 2 and value 22
Node inserted with key 130 and value 112
Node inserted with key 84 and value 56
Node inserted with key 93 and value 80
Node inserted with key 23 and value 1
Node inserted with key 29 and value 29
Node inserted with key 124 and value 99
Node inserted with key 75 and value 29
Node inserted with key 116 and value 37
Node inserted with key 40 and value 11
Node inserted with key 40 and value 35
Node inserted with key 133 and value 47
Node inserted with key 75 and value 56
Node inserted with key 83 and value 33
Node inserted with key 7 and value 5
Node inserted with key 46 and value 23
Node inserted with key 126 and value 124
Node inserted with key 73 and value 71
Node inserted with key 93 and value 29
Node inserted with key 3 and value 19
Node inserted with key 23 and value 48
Node inserted with key 107 and value 115
Node inserted with key 53 and value 49
Node inserted with key 109 and value 83
Node inserted with key 38 and value 5
Node inserted with key 54 and value 51
Node inserted with key 101 and value 35
Node inserted with key 78 and value 88
Node inserted with key 91 and value 68
Node inserted with key 8 and value 30
Node inserted with key 28 and value 40
Node inserted with key 128 and value 44
Node inserted with key 53 and value 14
Node inserted with key 92 and value 56
Node inserted with key 27 and value 11
Node inserted with key 43 and value 25
Node inserted with key 128 and value 56
Node inserted with key 86 and value 51
Node inserted with key 96 and value 28
Node inserted with key 17 and value 7
Node inserted with key 60 and value 1
Node inserted with key 134 and value 135
Node inserted with key 43 and value 37
Node inserted with key 102 and value 73
Node inserted with key 35 and value 28
Node inserted with key 47 and value 51
Node inserted with key 128 and value 29
Node inserted with key 81 and value 4
Node inserted with key 118 and value 43
Node inserted with key 29 and value 18
Node inserted with key 48 and value 40
Node inserted with key 118 and value 58
Node inserted with key 41 and value 88
Node inserted with key 102 and value 117
Node inserted with key 10 and value 36
Node inserted with key 56 and value 3
Node inserted with key 113 and value 43
Node inserted with key 85 and value 99
Node inserted with key 81 and value 5
Node inserted with key 22 and value 30
Node inserted with key 48 and value 59
Node inserted with key 100 and value 126
Node inserted with key 41 and value 82
Node inserted with key 101 and value 104
Node inserted with key 12 and value 27
Node inserted with key 34 and value 4
Node inserted with key 123 and value 51
Node inserted with key 67 and value 28
Node inserted with key 114 and value 63
Node inserted with key 9 and value 8
Node inserted with key 22 and value 22
Node inserted with key 116 and value 130
Node inserted with key 67 and value 1
Node inserted with key 108 and value 90
Node inserted with key 25 and value 25
Node inserted with key 55 and value 56
Node inserted with key 119 and value 126
Node inserted with key 75 and value 65
Node inserted with key 117 and value 16
Node inserted with key 36 and value 18
Node inserted with key 47 and value 57
Node inserted with key 111 and value 44
Node inserted with key 81 and value 36
Node inserted with key 119 and value 59
Node inserted with key 32 and value 30
Node inserted with key 23 and value 11
Node inserted with key 116 and value 51
Node inserted with key 100 and value 30
Node inserted with key 90 and value 14
Node inserted with key 12 and value 3
Node inserted with key 28 and value 41
Node inserted with key 111 and value 96
Node inserted with key 77 and value 73
Node inserted with key 119 and value 108
Node inserted with key 21 and value 15
Node inserted with key 33 and value 26
Node inserted with key 104 and value 80
Node inserted with key 95 and value 84
Node inserted with key 96 and value 102
Node inserted with key 8 and value 27
Node inserted with key 50 and value 36
Node inserted with key 105 and value 98
Node inserted with key 84 and value 12
Node inserted with key 98 and value 52
Node inserted with key 19 and value 9
Node inserted with key 22 and value 50
Node inserted with key 140 and value 127
Node inserted with key 46 and value 1
Node inserted with key 103 and value 12
Node inserted with key 8 and value 15
Node inserted with key 34 and value 19
Node inserted with key 114 and value 44
Node inserted with key 55 and value 11
Node inserted with key 109 and value 107
Node inserted with key 13 and value 28
Node inserted with key 58 and value 50
Node inserted with key 111 and value 98
Node inserted with key 82 and value 24
Node inserted with key 103 and value 29
Node inserted with key 12 and value 1
Node inserted with key 40 and value 44
Node inserted with key 131 and value 32
Node inserted with key 44 and value 50
Node inserted with key 105 and value 105
Node inserted with key 29 and value 19
Node inserted with key 39 and value 2
Node inserted with key 118 and value 133
Node inserted with key 52 and value 90
Node inserted with key 108 and value 110
Node inserted with key 16 and value 21
Node inserted with key 33 and value 16
Node inserted with key 105 and value 55
Node inserted with key 100 and value 4
Node inserted with key 113 and value 89
Node inserted with key 3 and value 16
Node inserted with key 23 and value 55
Node inserted with key 121 and value 82
Node inserted with key 52 and value 84
Node inserted with key 84 and value 85
Node inserted with key 30 and value 7
Node inserted with key 46 and value 13
Node inserted with key 140 and value 54
Node inserted with key 62 and value 59
Node inserted with key 114 and value 82
Node inserted with key 40 and value 26
Node inserted with key 57 and value 1
Node inserted with key 125 and value 28
Adding Nodes Done !!!!
Adding Nodes Done !!!!
Adding Nodes Done !!!!
Adding Nodes Done !!!!
Adding Nodes Done !!!!
Node Found with key 37 and value 8
Node Found with key 98 and value 48
Node Found with key 27 and value 54
Node Found with key 85 and value 13
Node Found with key 137 and value 49
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 87 and value 73
Node Found with key 46 and value 46
Node Found with key 30 and value 37
Node Found with key 57 and value 10
Node Found with key 102 and value 17
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 57 and value 16
Node Found with key 71 and value 92
Node Found with key 38 and value 5
Node Found with key 82 and value 68
Node Found with key 117 and value 109
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 135 and value 104
Node Found with key 67 and value 60
Node Found with key 29 and value 1
Node Found with key 83 and value 67
Node Found with key 50 and value 8
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 134 and value 3
Node Found with key 88 and value 62
Node Found with key 70 and value 97
Node Found with key 26 and value 3
Node Found with key 51 and value 2
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 131 and value 32
Node Found with key 107 and value 41
Node Found with key 65 and value 38
Node Found with key 9 and value 31
Node Found with key 52 and value 14
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 25 and value 4
Node Found with key 105 and value 87
Node Found with key 68 and value 29
Node Found with key 30 and value 49
Node Found with key 129 and value 55
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 40 and value 9
Node Found with key 111 and value 100
Node Found with key 62 and value 71
Node Found with key 56 and value 28
Node Found with key 111 and value 35
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 40 and value 90
Node Found with key 105 and value 24
Node Found with key 25 and value 20
Node Found with key 37 and value 9
Node Found with key 105 and value 12
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 99 and value 117
Node Found with key 90 and value 42
Node Found with key 5 and value 1
Node Found with key 24 and value 9
Node Found with key 135 and value 105
ERROR! Success
ERROR! Success
100 operations are done !!!!
ERROR! Success
100 operations are done !!!!
ERROR! Success
100 operations are done !!!!
ERROR! Success
100 operations are done !!!!
Node Found with key 88 and value 67
ERROR! Success
100 operations are done !!!!
*************** Dumping all the objects from the hashtable *****************
key = 0  data = 26 
key = 47  data = 57 
key = 86  data = 51 
key = 73  data = 71 
key = 123  data = 51 
key = 31  data = 5 
key = 10  data = 36 
key = 120  data = 9 
key = 60  data = 1 
key = 52  data = 14 
key = 39  data = 2 
key = 89  data = 71 
key = 68  data = 29 
key = 2  data = 22 
key = 81  data = 36 
key = 102  data = 17 
key = 18  data = 10 
key = 107  data = 41 
key = 78  data = 88 
key = 115  data = 104 
key = 26  data = 3 
key = 99  data = 117 
key = 133  data = 47 
key = 136  data = 58 
key = 36  data = 18 
key = 112  data = 50 
key = 91  data = 68 
key = 65  data = 38 
key = 94  data = 104 
key = 13  data = 28 
key = 5  data = 1 
key = 57  data = 16 
key = 128  data = 29 
key = 44  data = 50 
key = 34  data = 19 
key = 23  data = 55 
key = 135  data = 105 
key = 75  data = 65 
key = 67  data = 60 
key = 15  data = 1 
key = 62  data = 71 
key = 7  data = 5 
key = 83  data = 67 
key = 72  data = 67 
key = 88  data = 67 
key = 25  data = 20 
key = 70  data = 97 
key = 114  data = 82 
key = 12  data = 1 
key = 138  data = 92 
key = 59  data = 28 
key = 54  data = 51 
key = 41  data = 82 
key = 101  data = 104 
key = 117  data = 109 
key = 109  data = 107 
key = 93  data = 29 
key = 33  data = 16 
key = 130  data = 112 
key = 28  data = 41 
key = 96  data = 102 
key = 49  data = 21 
key = 4  data = 20 
key = 125  data = 28 
key = 122  data = 117 
key = 38  data = 5 
key = 104  data = 80 
key = 127  data = 109 
key = 20  data = 4 
key = 46  data = 46 
key = 80  data = 115 
key = 14  data = 24 
key = 95  data = 84 
key = 103  data = 29 
key = 129  data = 55 
key = 77  data = 73 
key = 137  data = 49 
key = 17  data = 7 
key = 132  data = 10 
key = 98  data = 48 
key = 43  data = 37 
key = 74  data = 48 
key = 140  data = 54 
key = 19  data = 9 
key = 51  data = 2 
key = 90  data = 42 
key = 22  data = 50 
key = 108  data = 110 
key = 85  data = 13 
key = 119  data = 108 
key = 40  data = 90 
key = 9  data = 31 
key = 30  data = 49 
key = 82  data = 68 
key = 48  data = 59 
key = 56  data = 28 
key = 124  data = 99 
key = 116  data = 51 
key = 111  data = 35 
key = 1  data = 35 
key = 35  data = 28 
key = 64  data = 2 
key = 106  data = 87 
key = 27  data = 54 
key = 69  data = 86 
key = 37  data = 9 
key = 11  data = 18 
key = 121  data = 82 
key = 66  data = 95 
key = 139  data = 128 
key = 32  data = 30 
key = 79  data = 10 
key = 42  data = 60 
key = 113  data = 89 
key = 63  data = 25 
key = 55  data = 11 
key = 134  data = 3 
key = 58  data = 50 
key = 87  data = 73 
key = 71  data = 92 
key = 131  data = 32 
key = 118  data = 133 
key = 16  data = 21 
key = 76  data = 66 
key = 24  data = 9 
key = 53  data = 14 
key = 45  data = 27 
key = 84  data = 85 
key = 92  data = 56 
key = 21  data = 15 
key = 3  data = 16 
key = 110  data = 6 
key = 105  data = 12 
key = 50  data = 8 
key = 29  data = 1 
key = 100  data = 4 
key = 126  data = 124 
key = 8  data = 15 
key = 97  data = 19 
Node inserted with key 69 and value 86
Node inserted with key 80 and value 115
Node inserted with key 27 and value 55
Node inserted with key 106 and value 72
Node inserted with key 23 and value 21
Node inserted with key 46 and value 27
Node inserted with key 97 and value 19
Node inserted with key 28 and value 46
Node inserted with key 114 and value 106
Node inserted with key 3 and value 16
Node inserted with key 96 and value 68
Node inserted with key 100 and value 69
Node inserted with key 40 and value 50
Node inserted with key 124 and value 83
Node inserted with key 29 and value 15
Node inserted with key 64 and value 2
Node inserted with key 108 and value 18
Node inserted with key 40 and value 27
Node inserted with key 137 and value 56
Node inserted with key 30 and value 2
Node inserted with key 77 and value 73
Node inserted with key 107 and value 119
Node inserted with key 44 and value 37
Node inserted with key 106 and value 44
Node inserted with key 18 and value 10
Node inserted with key 51 and value 26
Node inserted with key 102 and value 20
Node inserted with key 45 and value 33
Node inserted with key 140 and value 130
Node inserted with key 15 and value 1
Node inserted with key 63 and value 25
Node inserted with key 106 and value 87
Node inserted with key 31 and value 5
Node inserted with key 127 and value 109
Node inserted with key 36 and value 17
Node inserted with key 66 and value 95
Node inserted with key 114 and value 105
Node inserted with key 45 and value 27
Node inserted with key 114 and value 84
Node inserted with key 17 and value 30
Node inserted with key 68 and value 8
Node inserted with key 116 and value 98
Node inserted with key 44 and value 24
Node inserted with key 129 and value 51
Node inserted with key 32 and value 39
Node inserted with key 42 and value 60
Node inserted with key 116 and value 48
Node inserted with key 44 and value 52
Node inserted with key 110 and value 6
Node inserted with key 16 and value 19
Node inserted with key 81 and value 70
Node inserted with key 88 and value 58
Node inserted with key 43 and value 21
Node inserted with key 102 and value 62
Node inserted with key 30 and value 12
Node inserted with key 84 and value 56
Node inserted with key 93 and value 80
Node inserted with key 43 and value 1
Node inserted with key 9 and value 9
Node inserted with key 124 and value 99
Node inserted with key 75 and value 29
Node inserted with key 116 and value 37
Node inserted with key 60 and value 11
Node inserted with key 20 and value 35
Node inserted with key 133 and value 47
Node inserted with key 75 and value 56
Node inserted with key 83 and value 33
Node inserted with key 27 and value 5
Node inserted with key 26 and value 3
Node inserted with key 126 and value 124
Node inserted with key 73 and value 71
Node inserted with key 93 and value 29
Node inserted with key 23 and value 59
Node inserted with key 3 and value 8
Node inserted with key 107 and value 115
Node inserted with key 53 and value 49
Node inserted with key 109 and value 83
Node inserted with key 58 and value 25
Node inserted with key 34 and value 11
Node inserted with key 101 and value 35
Node inserted with key 78 and value 88
Node inserted with key 91 and value 68
Node inserted with key 28 and value 50
Node inserted with key 8 and value 20
Node inserted with key 128 and value 44
Node inserted with key 53 and value 14
Node inserted with key 92 and value 56
Node inserted with key 47 and value 51
Node inserted with key 23 and value 5
Node inserted with key 128 and value 56
Node inserted with key 86 and value 51
Node inserted with key 96 and value 28
Node inserted with key 37 and value 47
Node inserted with key 40 and value 1
Node inserted with key 134 and value 135
Node inserted with key 43 and value 37
Node inserted with key 102 and value 73
Node inserted with key 55 and value 8
Node inserted with key 27 and value 11
Node inserted with key 128 and value 29
Node inserted with key 81 and value 4
Node inserted with key 118 and value 43
Node inserted with key 49 and value 38
Node inserted with key 28 and value 0
Node inserted with key 118 and value 58
Node inserted with key 41 and value 88
Node inserted with key 102 and value 117
Node inserted with key 30 and value 36
Node inserted with key 36 and value 23
Node inserted with key 113 and value 43
Node inserted with key 85 and value 99
Node inserted with key 81 and value 5
Node inserted with key 42 and value 30
Node inserted with key 28 and value 19
Node inserted with key 100 and value 126
Node inserted with key 41 and value 82
Node inserted with key 101 and value 104
Node inserted with key 32 and value 27
Node inserted with key 14 and value 4
Node inserted with key 123 and value 51
Node inserted with key 67 and value 28
Node inserted with key 114 and value 63
Node inserted with key 29 and value 8
Node inserted with key 2 and value 22
Node inserted with key 116 and value 130
Node inserted with key 67 and value 1
Node inserted with key 108 and value 90
Node inserted with key 45 and value 5
Node inserted with key 35 and value 16
Node inserted with key 119 and value 126
Node inserted with key 75 and value 65
Node inserted with key 117 and value 16
Node inserted with key 56 and value 38
Node inserted with key 27 and value 37
Node inserted with key 111 and value 44
Node inserted with key 81 and value 36
Node inserted with key 119 and value 59
Node inserted with key 52 and value 10
Node inserted with key 3 and value 31
Node inserted with key 116 and value 51
Node inserted with key 100 and value 30
Node inserted with key 90 and value 14
Node inserted with key 32 and value 3
Node inserted with key 8 and value 21
Node inserted with key 111 and value 96
Node inserted with key 77 and value 73
Node inserted with key 119 and value 108
Node inserted with key 41 and value 55
Node inserted with key 13 and value 26
Node inserted with key 104 and value 80
Node inserted with key 95 and value 84
Node inserted with key 96 and value 102
Node inserted with key 28 and value 7
Node inserted with key 30 and value 36
Node inserted with key 105 and value 98
Node inserted with key 84 and value 12
Node inserted with key 98 and value 52
Node inserted with key 39 and value 9
Node inserted with key 2 and value 10
Node inserted with key 140 and value 127
Node inserted with key 46 and value 1
Node inserted with key 103 and value 12
Node inserted with key 28 and value 55
Node inserted with key 14 and value 39
Node inserted with key 114 and value 44
Node inserted with key 55 and value 11
Node inserted with key 109 and value 107
Node inserted with key 33 and value 48
Node inserted with key 38 and value 30
Node inserted with key 111 and value 98
Node inserted with key 82 and value 24
Node inserted with key 103 and value 29
Node inserted with key 32 and value 1
Node inserted with key 20 and value 4
Node inserted with key 131 and value 32
Node inserted with key 44 and value 50
Node inserted with key 105 and value 105
Node inserted with key 49 and value 19
Node inserted with key 19 and value 2
Node inserted with key 118 and value 133
Node inserted with key 52 and value 90
Node inserted with key 108 and value 110
Node inserted with key 36 and value 21
Node inserted with key 13 and value 16
Node inserted with key 105 and value 55
Node inserted with key 100 and value 4
Node inserted with key 113 and value 89
Node inserted with key 23 and value 56
Node inserted with key 3 and value 15
Node inserted with key 121 and value 82
Node inserted with key 52 and value 84
Node inserted with key 84 and value 85
Node inserted with key 50 and value 7
Node inserted with key 26 and value 13
Node inserted with key 140 and value 54
Node inserted with key 62 and value 59
Node inserted with key 114 and value 82
Node inserted with key 60 and value 26
Node inserted with key 37 and value 21
Node inserted with key 125 and value 28
Adding Nodes Done !!!!
Adding Nodes Done !!!!
Adding Nodes Done !!!!
Adding Nodes Done !!!!
Adding Nodes Done !!!!
Node Found with key 85 and value 13
Node Found with key 98 and value 48
Node Found with key 7 and value 34
Node Found with key 57 and value 8
Node Found with key 137 and value 49
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 57 and value 10
Node Found with key 46 and value 46
Node Found with key 30 and value 37
Node Found with key 87 and value 73
Node Found with key 102 and value 17
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 82 and value 68
Node Found with key 71 and value 92
Node Found with key 38 and value 5
Node Found with key 57 and value 16
Node Found with key 117 and value 109
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 83 and value 67
Node Found with key 67 and value 60
Node Found with key 29 and value 1
Node Found with key 55 and value 44
Node Found with key 130 and value 128
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 46 and value 43
Node Found with key 94 and value 2
Node Found with key 3 and value 17
Node Found with key 111 and value 2
Node Found with key 134 and value 3
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 29 and value 11
Node Found with key 91 and value 81
Node Found with key 38 and value 18
Node Found with key 112 and value 14
Node Found with key 131 and value 32
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 81 and value 27
Node Found with key 32 and value 29
Node Found with key 45 and value 24
Node Found with key 90 and value 109
Node Found with key 129 and value 55
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 116 and value 28
Node Found with key 47 and value 0
Node Found with key 31 and value 11
Node Found with key 60 and value 9
Node Found with key 111 and value 35
Node Found and deleted with key 47 and value 0
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 97 and value 9
Node Found with key 46 and value 44
Node Found with key 22 and value 30
Node Found with key 45 and value 20
Node Found with key 105 and value 12
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 90 and value 42
ERROR! Success
Node Found with key 19 and value 37
Node Found with key 25 and value 41
ERROR! Success
Node Found with key 84 and value 69
Node Found with key 135 and value 105
ERROR! Success
100 operations are done !!!!
ERROR! Success
100 operations are done !!!!
ERROR! Success
100 operations are done !!!!
Node Found with key 88 and value 67
ERROR! Success
100 operations are done !!!!
ERROR! Success
100 operations are done !!!!
*************** Dumping all the objects from the hashtable *****************
key = 0  data = 26 
key = 86  data = 51 
key = 73  data = 71 
key = 123  data = 51 
key = 31  data = 11 
key = 10  data = 36 
key = 120  data = 9 
key = 60  data = 9 
key = 52  data = 84 
key = 39  data = 9 
key = 89  data = 71 
key = 68  data = 8 
key = 2  data = 10 
key = 81  data = 27 
key = 102  data = 17 
key = 18  data = 10 
key = 107  data = 115 
key = 78  data = 88 
key = 115  data = 104 
key = 26  data = 13 
key = 99  data = 117 
key = 133  data = 47 
key = 136  data = 58 
key = 36  data = 21 
key = 112  data = 14 
key = 91  data = 81 
key = 65  data = 38 
key = 94  data = 2 
key = 13  data = 16 
key = 5  data = 1 
key = 57  data = 16 
key = 128  data = 29 
key = 44  data = 50 
key = 34  data = 11 
key = 23  data = 56 
key = 28  data = 55 
key = 135  data = 105 
key = 75  data = 65 
key = 67  data = 60 
key = 15  data = 1 
key = 62  data = 59 
key = 7  data = 34 
key = 83  data = 67 
key = 72  data = 67 
key = 88  data = 67 
key = 25  data = 41 
key = 70  data = 97 
key = 114  data = 82 
key = 12  data = 1 
key = 138  data = 92 
key = 59  data = 28 
key = 54  data = 51 
key = 41  data = 55 
key = 101  data = 104 
key = 117  data = 109 
key = 109  data = 107 
key = 93  data = 29 
key = 33  data = 48 
key = 130  data = 128 
key = 96  data = 102 
key = 49  data = 19 
key = 4  data = 20 
key = 125  data = 28 
key = 122  data = 117 
key = 38  data = 18 
key = 104  data = 80 
key = 127  data = 109 
key = 20  data = 4 
key = 46  data = 44 
key = 80  data = 115 
key = 14  data = 39 
key = 95  data = 84 
key = 103  data = 29 
key = 129  data = 55 
key = 77  data = 73 
key = 137  data = 49 
key = 17  data = 30 
key = 132  data = 10 
key = 98  data = 48 
key = 43  data = 37 
key = 74  data = 48 
key = 140  data = 54 
key = 19  data = 37 
key = 51  data = 26 
key = 90  data = 42 
key = 22  data = 30 
key = 108  data = 110 
key = 85  data = 13 
key = 119  data = 108 
key = 40  data = 1 
key = 9  data = 9 
key = 30  data = 37 
key = 82  data = 68 
key = 48  data = 59 
key = 56  data = 38 
key = 124  data = 99 
key = 116  data = 28 
key = 111  data = 35 
key = 1  data = 35 
key = 35  data = 16 
key = 64  data = 2 
key = 106  data = 87 
key = 27  data = 37 
key = 69  data = 86 
key = 37  data = 21 
key = 11  data = 18 
key = 121  data = 82 
key = 66  data = 95 
key = 139  data = 128 
key = 32  data = 29 
key = 79  data = 10 
key = 42  data = 30 
key = 113  data = 89 
key = 63  data = 25 
key = 55  data = 44 
key = 134  data = 3 
key = 58  data = 25 
key = 87  data = 73 
key = 71  data = 92 
key = 131  data = 32 
key = 118  data = 133 
key = 16  data = 19 
key = 76  data = 66 
key = 24  data = 9 
key = 53  data = 14 
key = 45  data = 20 
key = 84  data = 69 
key = 92  data = 56 
key = 21  data = 15 
key = 3  data = 17 
key = 110  data = 6 
key = 105  data = 12 
key = 50  data = 7 
key = 29  data = 11 
key = 100  data = 4 
key = 126  data = 124 
key = 8  data = 21 
key = 97  data = 9 
Node inserted with key 69 and value 86
Node inserted with key 80 and value 115
Node inserted with key 27 and value 55
Node inserted with key 106 and value 72
Node inserted with key 23 and value 21
Node inserted with key 46 and value 27
Node inserted with key 97 and value 19
Node inserted with key 28 and value 46
Node inserted with key 114 and value 106
Node inserted with key 3 and value 16
Node inserted with key 96 and value 68
Node inserted with key 100 and value 69
Node inserted with key 40 and value 50
Node inserted with key 124 and value 83
Node inserted with key 29 and value 15
Node inserted with key 64 and value 2
Node inserted with key 108 and value 18
Node inserted with key 40 and value 27
Node inserted with key 137 and value 56
Node inserted with key 30 and value 2
Node inserted with key 77 and value 73
Node inserted with key 107 and value 119
Node inserted with key 44 and value 37
Node inserted with key 106 and value 44
Node inserted with key 18 and value 10
Node inserted with key 51 and value 26
Node inserted with key 102 and value 20
Node inserted with key 45 and value 33
Node inserted with key 140 and value 130
Node inserted with key 15 and value 1
Node inserted with key 63 and value 25
Node inserted with key 106 and value 87
Node inserted with key 31 and value 5
Node inserted with key 127 and value 109
Node inserted with key 36 and value 17
Node inserted with key 109 and value 15
Node inserted with key 64 and value 45
Node inserted with key 45 and value 27
Node inserted with key 114 and value 84
Node inserted with key 17 and value 30
Node inserted with key 84 and value 48
Node inserted with key 91 and value 78
Node inserted with key 44 and value 24
Node inserted with key 129 and value 51
Node inserted with key 32 and value 39
Node inserted with key 93 and value 60
Node inserted with key 78 and value 68
Node inserted with key 44 and value 52
Node inserted with key 110 and value 6
Node inserted with key 16 and value 19
Node inserted with key 109 and value 10
Node inserted with key 52 and value 78
Node inserted with key 43 and value 21
Node inserted with key 102 and value 62
Node inserted with key 30 and value 12
Node inserted with key 110 and value 116
Node inserted with key 81 and value 80
Node inserted with key 43 and value 1
Node inserted with key 109 and value 69
Node inserted with key 24 and value 19
Node inserted with key 96 and value 9
Node inserted with key 97 and value 17
Node inserted with key 60 and value 11
Node inserted with key 120 and value 75
Node inserted with key 33 and value 7
Node inserted with key 99 and value 16
Node inserted with key 44 and value 53
Node inserted with key 27 and value 5
Node inserted with key 126 and value 43
Node inserted with key 26 and value 24
Node inserted with key 113 and value 111
Node inserted with key 58 and value 29
Node inserted with key 23 and value 59
Node inserted with key 103 and value 108
Node inserted with key 7 and value 35
Node inserted with key 95 and value 69
Node inserted with key 69 and value 23
Node inserted with key 58 and value 25
Node inserted with key 134 and value 131
Node inserted with key 1 and value 35
Node inserted with key 97 and value 88
Node inserted with key 97 and value 28
Node inserted with key 28 and value 50
Node inserted with key 108 and value 20
Node inserted with key 28 and value 4
Node inserted with key 92 and value 34
Node inserted with key 100 and value 56
Node inserted with key 47 and value 51
Node inserted with key 123 and value 85
Node inserted with key 28 and value 16
Node inserted with key 101 and value 71
Node inserted with key 47 and value 28
Node inserted with key 37 and value 47
Node inserted with key 140 and value 1
Node inserted with key 34 and value 35
Node inserted with key 119 and value 37
Node inserted with key 71 and value 93
Node inserted with key 55 and value 8
Node inserted with key 127 and value 31
Node inserted with key 28 and value 9
Node inserted with key 119 and value 4
Node inserted with key 88 and value 63
Node inserted with key 49 and value 38
Node inserted with key 128 and value 100
Node inserted with key 18 and value 18
Node inserted with key 83 and value 48
Node inserted with key 77 and value 17
Node inserted with key 30 and value 36
Node inserted with key 136 and value 63
Node inserted with key 13 and value 23
Node inserted with key 93 and value 59
Node inserted with key 92 and value 25
Node inserted with key 42 and value 30
Node inserted with key 128 and value 79
Node inserted with key 0 and value 26
Node inserted with key 107 and value 2
Node inserted with key 79 and value 64
Node inserted with key 32 and value 27
Node inserted with key 114 and value 104
Node inserted with key 23 and value 11
Node inserted with key 98 and value 108
Node inserted with key 98 and value 43
Node inserted with key 29 and value 8
Node inserted with key 102 and value 62
Node inserted with key 16 and value 10
Node inserted with key 116 and value 1
Node inserted with key 89 and value 30
Node inserted with key 45 and value 5
Node inserted with key 135 and value 136
Node inserted with key 19 and value 26
Node inserted with key 113 and value 65
Node inserted with key 84 and value 16
Node inserted with key 56 and value 38
Node inserted with key 127 and value 37
Node inserted with key 11 and value 24
Node inserted with key 84 and value 36
Node inserted with key 85 and value 99
Node inserted with key 52 and value 10
Node inserted with key 103 and value 71
Node inserted with key 16 and value 11
Node inserted with key 90 and value 10
Node inserted with key 58 and value 94
Node inserted with key 32 and value 3
Node inserted with key 108 and value 61
Node inserted with key 11 and value 36
Node inserted with key 85 and value 93
Node inserted with key 44 and value 68
Node inserted with key 41 and value 55
Node inserted with key 113 and value 66
Node inserted with key 4 and value 20
Node inserted with key 100 and value 44
Node inserted with key 95 and value 42
Node inserted with key 28 and value 7
Node inserted with key 130 and value 96
Node inserted with key 5 and value 18
Node inserted with key 114 and value 92
Node inserted with key 78 and value 72
Node inserted with key 39 and value 9
Node inserted with key 102 and value 30
Node inserted with key 40 and value 27
Node inserted with key 98 and value 21
Node inserted with key 40 and value 72
Node inserted with key 28 and value 55
Node inserted with key 114 and value 139
Node inserted with key 14 and value 24
Node inserted with key 88 and value 91
Node inserted with key 72 and value 67
Node inserted with key 33 and value 48
Node inserted with key 138 and value 70
Node inserted with key 11 and value 18
Node inserted with key 89 and value 64
Node inserted with key 41 and value 69
Node inserted with key 32 and value 1
Node inserted with key 120 and value 64
Node inserted with key 31 and value 12
Node inserted with key 112 and value 50
Node inserted with key 81 and value 85
Node inserted with key 49 and value 19
Node inserted with key 119 and value 2
Node inserted with key 18 and value 33
Node inserted with key 104 and value 110
Node inserted with key 71 and value 90
Node inserted with key 36 and value 21
Node inserted with key 113 and value 116
Node inserted with key 5 and value 35
Node inserted with key 97 and value 4
Node inserted with key 74 and value 69
Node inserted with key 23 and value 56
Node inserted with key 103 and value 135
Node inserted with key 21 and value 22
Node inserted with key 85 and value 4
Node inserted with key 64 and value 5
Node inserted with key 50 and value 7
Node inserted with key 126 and value 33
Node inserted with key 40 and value 34
Node inserted with key 84 and value 99
Node inserted with key 47 and value 2
Node inserted with key 60 and value 26
Node inserted with key 137 and value 81
Node inserted with key 25 and value 28
Adding Nodes Done !!!!
Adding Nodes Done !!!!
Adding Nodes Done !!!!
Adding Nodes Done !!!!
Adding Nodes Done !!!!
Node Found with key 89 and value 8
Node Found with key 37 and value 9
Node Found with key 43 and value 33
Node Found with key 57 and value 8
Node Found with key 107 and value 94
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 50 and value 17
Node Found with key 46 and value 46
Node Found with key 117 and value 70
Node Found with key 107 and value 93
Node Found with key 2 and value 17
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 117 and value 76
Node Found with key 58 and value 52
Node Found with key 59 and value 25
Node Found with key 102 and value 48
Node Found with key 17 and value 9
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 135 and value 104
Node Found with key 37 and value 0
Node Found with key 80 and value 21
Node Found with key 83 and value 67
Node Found with key 30 and value 28
Node Found and deleted with key 37 and value 0
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 28 and value 2
Node Found with key 70 and value 97
Node Found with key 106 and value 43
Node Found with key 131 and value 82
Node Found with key 34 and value 3
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 47 and value 41
Node Found with key 65 and value 38
Node Found with key 89 and value 71
Node Found with key 132 and value 54
Node Found with key 31 and value 12
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 105 and value 84
Node Found with key 45 and value 27
Node Found with key 68 and value 29
Node Found with key 110 and value 129
Node Found with key 29 and value 15
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 120 and value 9
Node Found with key 51 and value 40
Node Found with key 62 and value 71
Node Found with key 136 and value 48
Node Found with key 11 and value 35
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 105 and value 12
Node Found with key 25 and value 24
Node Found with key 42 and value 10
Node Found with key 91 and value 40
Node Found with key 97 and value 9
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 26 and value 2
Node Found with key 39 and value 57
Node Found with key 100 and value 61
Node Found with key 84 and value 69
Node Found with key 135 and value 105
ERROR! Success
ERROR! Success
100 operations are done !!!!
ERROR! Success
100 operations are done !!!!
ERROR! Success
100 operations are done !!!!
ERROR! Success
100 operations are done !!!!
Node Found with key 17 and value 7
ERROR! Success
100 operations are done !!!!
*************** Dumping all the objects from the hashtable *****************
key = 47  data = 41 
key = 0  data = 26 
key = 86  data = 51 
key = 73  data = 71 
key = 123  data = 85 
key = 31  data = 12 
key = 10  data = 36 
key = 120  data = 9 
key = 60  data = 26 
key = 52  data = 10 
key = 39  data = 57 
key = 89  data = 71 
key = 68  data = 29 
key = 2  data = 17 
key = 81  data = 85 
key = 102  data = 48 
key = 18  data = 33 
key = 107  data = 93 
key = 78  data = 72 
key = 115  data = 104 
key = 26  data = 2 
key = 99  data = 16 
key = 133  data = 47 
key = 136  data = 48 
key = 36  data = 21 
key = 112  data = 50 
key = 91  data = 40 
key = 65  data = 38 
key = 94  data = 2 
key = 13  data = 23 
key = 5  data = 35 
key = 57  data = 8 
key = 128  data = 79 
key = 44  data = 68 
key = 34  data = 3 
key = 23  data = 56 
key = 28  data = 2 
key = 135  data = 105 
key = 75  data = 65 
key = 67  data = 60 
key = 15  data = 1 
key = 62  data = 71 
key = 7  data = 35 
key = 83  data = 67 
key = 72  data = 67 
key = 88  data = 91 
key = 25  data = 24 
key = 70  data = 97 
key = 114  data = 139 
key = 12  data = 1 
key = 138  data = 70 
key = 59  data = 25 
key = 54  data = 51 
key = 41  data = 69 
key = 101  data = 71 
key = 117  data = 76 
key = 109  data = 69 
key = 93  data = 59 
key = 33  data = 48 
key = 130  data = 96 
key = 96  data = 9 
key = 49  data = 19 
key = 4  data = 20 
key = 125  data = 28 
key = 122  data = 117 
key = 38  data = 18 
key = 104  data = 110 
key = 127  data = 37 
key = 20  data = 4 
key = 46  data = 46 
key = 80  data = 21 
key = 14  data = 24 
key = 95  data = 42 
key = 103  data = 135 
key = 129  data = 51 
key = 77  data = 17 
key = 137  data = 81 
key = 17  data = 7 
key = 132  data = 54 
key = 98  data = 21 
key = 43  data = 33 
key = 74  data = 69 
key = 140  data = 1 
key = 19  data = 26 
key = 51  data = 40 
key = 90  data = 10 
key = 22  data = 30 
key = 108  data = 61 
key = 85  data = 4 
key = 119  data = 2 
key = 40  data = 34 
key = 9  data = 9 
key = 30  data = 28 
key = 82  data = 68 
key = 48  data = 59 
key = 56  data = 38 
key = 124  data = 83 
key = 116  data = 1 
key = 111  data = 35 
key = 1  data = 35 
key = 35  data = 16 
key = 64  data = 5 
key = 106  data = 43 
key = 27  data = 5 
key = 69  data = 23 
key = 11  data = 35 
key = 121  data = 82 
key = 66  data = 95 
key = 139  data = 128 
key = 32  data = 1 
key = 79  data = 64 
key = 42  data = 10 
key = 113  data = 116 
key = 63  data = 25 
key = 55  data = 8 
key = 134  data = 131 
key = 58  data = 52 
key = 87  data = 73 
key = 71  data = 90 
key = 131  data = 82 
key = 118  data = 133 
key = 16  data = 11 
key = 76  data = 66 
key = 24  data = 19 
key = 53  data = 14 
key = 45  data = 27 
key = 84  data = 69 
key = 92  data = 25 
key = 21  data = 22 
key = 3  data = 16 
key = 110  data = 129 
key = 105  data = 12 
key = 50  data = 17 
key = 29  data = 15 
key = 100  data = 61 
key = 126  data = 33 
key = 8  data = 21 
key = 97  data = 9 
Node inserted with key 69 and value 86
Node inserted with key 80 and value 115
Node inserted with key 27 and value 55
Node inserted with key 106 and value 72
Node inserted with key 23 and value 21
Node inserted with key 46 and value 27
Node inserted with key 97 and value 19
Node inserted with key 28 and value 46
Node inserted with key 114 and value 106
Node inserted with key 3 and value 16
Node inserted with key 96 and value 68
Node inserted with key 100 and value 69
Node inserted with key 40 and value 50
Node inserted with key 124 and value 83
Node inserted with key 29 and value 15
Node inserted with key 64 and value 2
Node inserted with key 108 and value 18
Node inserted with key 40 and value 27
Node inserted with key 137 and value 56
Node inserted with key 30 and value 2
Node inserted with key 77 and value 73
Node inserted with key 107 and value 119
Node inserted with key 44 and value 37
Node inserted with key 106 and value 44
Node inserted with key 18 and value 10
Node inserted with key 51 and value 26
Node inserted with key 102 and value 20
Node inserted with key 45 and value 33
Node inserted with key 140 and value 130
Node inserted with key 15 and value 1
Node inserted with key 63 and value 25
Node inserted with key 106 and value 87
Node inserted with key 31 and value 5
Node inserted with key 127 and value 109
Node inserted with key 36 and value 17
Node inserted with key 66 and value 95
Node inserted with key 114 and value 105
Node inserted with key 45 and value 27
Node inserted with key 114 and value 84
Node inserted with key 17 and value 30
Node inserted with key 68 and value 8
Node inserted with key 116 and value 98
Node inserted with key 44 and value 24
Node inserted with key 129 and value 51
Node inserted with key 32 and value 39
Node inserted with key 42 and value 60
Node inserted with key 116 and value 48
Node inserted with key 44 and value 52
Node inserted with key 110 and value 6
Node inserted with key 16 and value 19
Node inserted with key 81 and value 70
Node inserted with key 88 and value 58
Node inserted with key 43 and value 21
Node inserted with key 102 and value 62
Node inserted with key 30 and value 12
Node inserted with key 84 and value 56
Node inserted with key 93 and value 80
Node inserted with key 43 and value 1
Node inserted with key 109 and value 69
Node inserted with key 24 and value 19
Node inserted with key 75 and value 29
Node inserted with key 116 and value 37
Node inserted with key 60 and value 11
Node inserted with key 120 and value 75
Node inserted with key 33 and value 7
Node inserted with key 75 and value 56
Node inserted with key 83 and value 33
Node inserted with key 27 and value 5
Node inserted with key 126 and value 43
Node inserted with key 26 and value 24
Node inserted with key 73 and value 71
Node inserted with key 93 and value 29
Node inserted with key 23 and value 59
Node inserted with key 103 and value 108
Node inserted with key 7 and value 35
Node inserted with key 53 and value 49
Node inserted with key 109 and value 83
Node inserted with key 58 and value 25
Node inserted with key 134 and value 131
Node inserted with key 1 and value 35
Node inserted with key 78 and value 88
Node inserted with key 91 and value 68
Node inserted with key 28 and value 50
Node inserted with key 108 and value 20
Node inserted with key 28 and value 4
Node inserted with key 53 and value 14
Node inserted with key 92 and value 56
Node inserted with key 47 and value 51
Node inserted with key 123 and value 85
Node inserted with key 28 and value 16
Node inserted with key 86 and value 51
Node inserted with key 96 and value 28
Node inserted with key 37 and value 47
Node inserted with key 140 and value 1
Node inserted with key 34 and value 35
Node inserted with key 43 and value 37
Node inserted with key 102 and value 73
Node inserted with key 55 and value 8
Node inserted with key 127 and value 31
Node inserted with key 28 and value 9
Node inserted with key 81 and value 4
Node inserted with key 118 and value 43
Node inserted with key 49 and value 38
Node inserted with key 128 and value 100
Node inserted with key 18 and value 18
Node inserted with key 41 and value 88
Node inserted with key 102 and value 117
Node inserted with key 30 and value 36
Node inserted with key 136 and value 63
Node inserted with key 13 and value 23
Node inserted with key 85 and value 99
Node inserted with key 81 and value 5
Node inserted with key 42 and value 30
Node inserted with key 128 and value 79
Node inserted with key 0 and value 26
Node inserted with key 41 and value 82
Node inserted with key 101 and value 104
Node inserted with key 32 and value 27
Node inserted with key 114 and value 104
Node inserted with key 23 and value 11
Node inserted with key 67 and value 28
Node inserted with key 114 and value 63
Node inserted with key 29 and value 8
Node inserted with key 102 and value 62
Node inserted with key 16 and value 10
Node inserted with key 67 and value 1
Node inserted with key 108 and value 90
Node inserted with key 45 and value 5
Node inserted with key 135 and value 136
Node inserted with key 19 and value 26
Node inserted with key 75 and value 65
Node inserted with key 117 and value 16
Node inserted with key 56 and value 38
Node inserted with key 127 and value 37
Node inserted with key 11 and value 24
Node inserted with key 81 and value 36
Node inserted with key 119 and value 59
Node inserted with key 52 and value 10
Node inserted with key 103 and value 71
Node inserted with key 16 and value 11
Node inserted with key 100 and value 30
Node inserted with key 90 and value 14
Node inserted with key 32 and value 3
Node inserted with key 108 and value 61
Node inserted with key 11 and value 36
Node inserted with key 77 and value 73
Node inserted with key 119 and value 108
Node inserted with key 41 and value 55
Node inserted with key 113 and value 66
Node inserted with key 4 and value 20
Node inserted with key 95 and value 84
Node inserted with key 96 and value 102
Node inserted with key 28 and value 7
Node inserted with key 130 and value 96
Node inserted with key 5 and value 18
Node inserted with key 84 and value 12
Node inserted with key 98 and value 52
Node inserted with key 39 and value 9
Node inserted with key 2 and value 10
Node inserted with key 140 and value 127
Node inserted with key 46 and value 1
Node inserted with key 103 and value 12
Node inserted with key 28 and value 55
Node inserted with key 14 and value 39
Node inserted with key 114 and value 44
Node inserted with key 55 and value 11
Node inserted with key 109 and value 107
Node inserted with key 33 and value 48
Node inserted with key 38 and value 30
Node inserted with key 111 and value 98
Node inserted with key 82 and value 24
Node inserted with key 103 and value 29
Node inserted with key 32 and value 1
Node inserted with key 20 and value 4
Node inserted with key 131 and value 32
Node inserted with key 44 and value 50
Node inserted with key 105 and value 105
Node inserted with key 49 and value 19
Node inserted with key 19 and value 2
Node inserted with key 118 and value 133
Node inserted with key 52 and value 90
Node inserted with key 108 and value 110
Node inserted with key 36 and value 21
Node inserted with key 13 and value 16
Node inserted with key 105 and value 55
Node inserted with key 100 and value 4
Node inserted with key 113 and value 89
Node inserted with key 23 and value 56
Node inserted with key 3 and value 15
Node inserted with key 121 and value 82
Node inserted with key 52 and value 84
Node inserted with key 84 and value 85
Node inserted with key 50 and value 7
Node inserted with key 26 and value 13
Node inserted with key 140 and value 54
Node inserted with key 62 and value 59
Node inserted with key 114 and value 82
Node inserted with key 60 and value 26
Node inserted with key 37 and value 21
Node inserted with key 125 and value 28
Adding Nodes Done !!!!
Adding Nodes Done !!!!
Adding Nodes Done !!!!
Adding Nodes Done !!!!
Adding Nodes Done !!!!
Node Found with key 98 and value 48
Node Found with key 57 and value 8
Node Found with key 7 and value 34
Node Found with key 85 and value 13
Node Found with key 137 and value 49
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 117 and value 70
Node Found with key 30 and value 37
Node Found with key 60 and value 6
Node Found with key 69 and value 33
Node Found with key 102 and value 17
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 117 and value 109
Node Found with key 58 and value 52
Node Found with key 38 and value 5
Node Found with key 70 and value 88
Node Found with key 117 and value 76
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 29 and value 1
Node Found with key 37 and value 0
Node Found with key 70 and value 4
Node Found with key 83 and value 67
Node Found with key 130 and value 128
Node Found and deleted with key 37 and value 0
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 98 and value 43
Node Found with key 28 and value 2
Node Found with key 3 and value 17
Node Found with key 111 and value 2
Node Found with key 134 and value 3
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 82 and value 51
Node Found with key 47 and value 41
Node Found with key 38 and value 18
Node Found with key 112 and value 14
Node Found with key 131 and value 32
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 77 and value 64
Node Found with key 45 and value 27
Node Found with key 32 and value 29
Node Found with key 90 and value 109
Node Found with key 129 and value 55
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 51 and value 40
Node Found with key 31 and value 11
Node Found with key 47 and value 89
Node Found with key 116 and value 28
Node Found with key 111 and value 35
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 45 and value 24
Node Found with key 22 and value 30
Node Found with key 91 and value 40
Node Found with key 97 and value 9
Node Found with key 105 and value 12
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 100 and value 61
Node Found with key 46 and value 42
Node Found with key 19 and value 37
Node Found with key 84 and value 69
Node Found with key 135 and value 105
ERROR! Success
Node Found with key 37 and value 27
ERROR! Success
100 operations are done !!!!
ERROR! Success
100 operations are done !!!!
ERROR! Success
100 operations are done !!!!
ERROR! Success
100 operations are done !!!!
ERROR! Invalid argument
100 operations are done !!!!
*************** Dumping all the objects from the hashtable *****************
key = 47  data = 89 
key = 0  data = 26 
key = 86  data = 51 
key = 73  data = 71 
key = 123  data = 85 
key = 31  data = 11 
key = 10  data = 36 
key = 120  data = 75 
key = 60  data = 6 
key = 52  data = 84 
key = 39  data = 9 
key = 89  data = 71 
key = 68  data = 8 
key = 2  data = 10 
key = 81  data = 36 
key = 102  data = 17 
key = 18  data = 18 
key = 107  data = 119 
key = 78  data = 88 
key = 115  data = 104 
key = 26  data = 13 
key = 99  data = 16 
key = 133  data = 47 
key = 136  data = 63 
key = 36  data = 21 
key = 112  data = 14 
key = 91  data = 40 
key = 65  data = 38 
key = 94  data = 2 
key = 13  data = 16 
key = 5  data = 18 
key = 57  data = 8 
key = 128  data = 79 
key = 44  data = 50 
key = 34  data = 35 
key = 23  data = 56 
key = 28  data = 2 
key = 135  data = 105 
key = 75  data = 65 
key = 67  data = 1 
key = 15  data = 1 
key = 62  data = 59 
key = 7  data = 34 
key = 83  data = 67 
key = 72  data = 67 
key = 88  data = 58 
key = 25  data = 24 
key = 70  data = 4 
key = 114  data = 82 
key = 12  data = 1 
key = 138  data = 70 
key = 59  data = 25 
key = 54  data = 51 
key = 41  data = 55 
key = 101  data = 104 
key = 117  data = 109 
key = 109  data = 107 
key = 93  data = 29 
key = 33  data = 48 
key = 130  data = 128 
key = 96  data = 102 
key = 49  data = 19 
key = 4  data = 20 
key = 125  data = 28 
key = 122  data = 117 
key = 38  data = 18 
key = 104  data = 110 
key = 127  data = 37 
key = 20  data = 4 
key = 46  data = 42 
key = 80  data = 115 
key = 14  data = 39 
key = 95  data = 84 
key = 103  data = 29 
key = 129  data = 55 
key = 77  data = 64 
key = 137  data = 49 
key = 17  data = 30 
key = 132  data = 54 
key = 98  data = 43 
key = 43  data = 37 
key = 74  data = 69 
key = 140  data = 54 
key = 19  data = 37 
key = 51  data = 40 
key = 90  data = 109 
key = 22  data = 30 
key = 108  data = 110 
key = 85  data = 13 
key = 119  data = 108 
key = 40  data = 27 
key = 9  data = 9 
key = 30  data = 37 
key = 82  data = 51 
key = 48  data = 59 
key = 56  data = 38 
key = 124  data = 83 
key = 116  data = 28 
key = 111  data = 35 
key = 1  data = 35 
key = 35  data = 16 
key = 64  data = 2 
key = 106  data = 87 
key = 27  data = 5 
key = 69  data = 33 
key = 37  data = 27 
key = 11  data = 36 
key = 121  data = 82 
key = 66  data = 95 
key = 139  data = 128 
key = 32  data = 29 
key = 79  data = 64 
key = 42  data = 30 
key = 113  data = 89 
key = 63  data = 25 
key = 55  data = 11 
key = 134  data = 3 
key = 58  data = 52 
key = 87  data = 73 
key = 71  data = 90 
key = 131  data = 32 
key = 118  data = 133 
key = 16  data = 11 
key = 76  data = 66 
key = 24  data = 19 
key = 53  data = 14 
key = 45  data = 24 
key = 84  data = 69 
key = 92  data = 56 
key = 21  data = 22 
key = 3  data = 17 
key = 110  data = 6 
key = 105  data = 12 
key = 50  data = 7 
key = 29  data = 1 
key = 100  data = 61 
key = 126  data = 43 
key = 8  data = 21 
key = 97  data = 9 
Node inserted with key 69 and value 86
Node inserted with key 80 and value 115
Node inserted with key 27 and value 55
Node inserted with key 106 and value 72
Node inserted with key 23 and value 21
Node inserted with key 46 and value 27
Node inserted with key 97 and value 19
Node inserted with key 28 and value 46
Node inserted with key 114 and value 106
Node inserted with key 3 and value 16
Node inserted with key 96 and value 68
Node inserted with key 100 and value 69
Node inserted with key 40 and value 50
Node inserted with key 124 and value 83
Node inserted with key 29 and value 15
Node inserted with key 64 and value 2
Node inserted with key 108 and value 18
Node inserted with key 40 and value 27
Node inserted with key 137 and value 56
Node inserted with key 30 and value 2
Node inserted with key 77 and value 73
Node inserted with key 107 and value 119
Node inserted with key 44 and value 37
Node inserted with key 106 and value 44
Node inserted with key 18 and value 10
Node inserted with key 51 and value 26
Node inserted with key 102 and value 20
Node inserted with key 45 and value 33
Node inserted with key 140 and value 130
Node inserted with key 15 and value 1
Node inserted with key 63 and value 25
Node inserted with key 106 and value 87
Node inserted with key 31 and value 5
Node inserted with key 127 and value 109
Node inserted with key 36 and value 17
Node inserted with key 66 and value 95
Node inserted with key 114 and value 105
Node inserted with key 45 and value 27
Node inserted with key 114 and value 84
Node inserted with key 17 and value 30
Node inserted with key 68 and value 8
Node inserted with key 116 and value 98
Node inserted with key 44 and value 24
Node inserted with key 129 and value 51
Node inserted with key 32 and value 39
Node inserted with key 42 and value 60
Node inserted with key 116 and value 48
Node inserted with key 44 and value 52
Node inserted with key 110 and value 6
Node inserted with key 16 and value 19
Node inserted with key 81 and value 70
Node inserted with key 88 and value 58
Node inserted with key 43 and value 21
Node inserted with key 102 and value 62
Node inserted with key 30 and value 12
Node inserted with key 84 and value 56
Node inserted with key 93 and value 80
Node inserted with key 43 and value 1
Node inserted with key 109 and value 69
Node inserted with key 24 and value 19
Node inserted with key 75 and value 29
Node inserted with key 116 and value 37
Node inserted with key 60 and value 11
Node inserted with key 120 and value 75
Node inserted with key 33 and value 7
Node inserted with key 75 and value 56
Node inserted with key 83 and value 33
Node inserted with key 27 and value 5
Node inserted with key 126 and value 43
Node inserted with key 26 and value 24
Node inserted with key 73 and value 71
Node inserted with key 93 and value 29
Node inserted with key 23 and value 59
Node inserted with key 103 and value 108
Node inserted with key 7 and value 35
Node inserted with key 53 and value 49
Node inserted with key 109 and value 83
Node inserted with key 58 and value 25
Node inserted with key 134 and value 131
Node inserted with key 1 and value 35
Node inserted with key 78 and value 88
Node inserted with key 91 and value 68
Node inserted with key 28 and value 50
Node inserted with key 108 and value 20
Node inserted with key 28 and value 4
Node inserted with key 53 and value 14
Node inserted with key 92 and value 56
Node inserted with key 47 and value 51
Node inserted with key 123 and value 85
Node inserted with key 28 and value 16
Node inserted with key 86 and value 51
Node inserted with key 96 and value 28
Node inserted with key 37 and value 47
Node inserted with key 140 and value 1
Node inserted with key 34 and value 35
Node inserted with key 43 and value 37
Node inserted with key 102 and value 73
Node inserted with key 55 and value 8
Node inserted with key 127 and value 31
Node inserted with key 28 and value 9
Node inserted with key 81 and value 4
Node inserted with key 118 and value 43
Node inserted with key 49 and value 38
Node inserted with key 128 and value 100
Node inserted with key 18 and value 18
Node inserted with key 41 and value 88
Node inserted with key 102 and value 117
Node inserted with key 30 and value 36
Node inserted with key 136 and value 63
Node inserted with key 13 and value 23
Node inserted with key 85 and value 99
Node inserted with key 81 and value 5
Node inserted with key 42 and value 30
Node inserted with key 128 and value 79
Node inserted with key 0 and value 26
Node inserted with key 41 and value 82
Node inserted with key 101 and value 104
Node inserted with key 32 and value 27
Node inserted with key 114 and value 104
Node inserted with key 23 and value 11
Node inserted with key 67 and value 28
Node inserted with key 114 and value 63
Node inserted with key 29 and value 8
Node inserted with key 102 and value 62
Node inserted with key 16 and value 10
Node inserted with key 67 and value 1
Node inserted with key 108 and value 90
Node inserted with key 45 and value 5
Node inserted with key 135 and value 136
Node inserted with key 19 and value 26
Node inserted with key 75 and value 65
Node inserted with key 117 and value 16
Node inserted with key 56 and value 38
Node inserted with key 127 and value 37
Node inserted with key 11 and value 24
Node inserted with key 81 and value 36
Node inserted with key 119 and value 59
Node inserted with key 52 and value 10
Node inserted with key 103 and value 71
Node inserted with key 16 and value 11
Node inserted with key 100 and value 30
Node inserted with key 90 and value 14
Node inserted with key 32 and value 3
Node inserted with key 108 and value 61
Node inserted with key 11 and value 36
Node inserted with key 77 and value 73
Node inserted with key 119 and value 108
Node inserted with key 41 and value 55
Node inserted with key 113 and value 66
Node inserted with key 4 and value 20
Node inserted with key 95 and value 84
Node inserted with key 96 and value 102
Node inserted with key 28 and value 7
Node inserted with key 130 and value 96
Node inserted with key 5 and value 18
Node inserted with key 84 and value 12
Node inserted with key 98 and value 52
Node inserted with key 39 and value 9
Node inserted with key 102 and value 30
Node inserted with key 40 and value 27
Node inserted with key 46 and value 1
Node inserted with key 103 and value 12
Node inserted with key 28 and value 55
Node inserted with key 114 and value 139
Node inserted with key 14 and value 24
Node inserted with key 55 and value 11
Node inserted with key 109 and value 107
Node inserted with key 33 and value 48
Node inserted with key 138 and value 70
Node inserted with key 11 and value 18
Node inserted with key 82 and value 24
Node inserted with key 103 and value 29
Node inserted with key 32 and value 1
Node inserted with key 120 and value 64
Node inserted with key 31 and value 12
Node inserted with key 44 and value 50
Node inserted with key 105 and value 105
Node inserted with key 49 and value 19
Node inserted with key 119 and value 2
Node inserted with key 18 and value 33
Node inserted with key 52 and value 90
Node inserted with key 108 and value 110
Node inserted with key 36 and value 21
Node inserted with key 113 and value 116
Node inserted with key 5 and value 35
Node inserted with key 100 and value 4
Node inserted with key 113 and value 89
Node inserted with key 23 and value 56
Node inserted with key 103 and value 135
Node inserted with key 21 and value 22
Node inserted with key 52 and value 84
Node inserted with key 84 and value 85
Node inserted with key 50 and value 7
Node inserted with key 126 and value 33
Node inserted with key 40 and value 34
Node inserted with key 62 and value 59
Node inserted with key 114 and value 82
Node inserted with key 60 and value 26
Node inserted with key 137 and value 81
Node inserted with key 25 and value 28
Adding Nodes Done !!!!
Adding Nodes Done !!!!
Adding Nodes Done !!!!
Adding Nodes Done !!!!
Adding Nodes Done !!!!
Node Found with key 57 and value 8
Node Found with key 85 and value 13
Node Found with key 98 and value 48
Node Found with key 107 and value 94
Node Found with key 37 and value 9
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 60 and value 6
ERROR! Success
Node Found with key 2 and value 17
Node Found with key 110 and value 77
Node Found with key 73 and value 90
Node Found with key 107 and value 93
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 117 and value 76
Node Found with key 58 and value 52
Node Found with key 38 and value 5
Node Found with key 70 and value 88
Node Found with key 117 and value 109
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 70 and value 4
Node Found with key 37 and value 0
Node Found with key 29 and value 1
Node Found with key 83 and value 67
Node Found with key 130 and value 128
Node Found and deleted with key 37 and value 0
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 134 and value 3
Node Found with key 28 and value 2
Node Found with key 3 and value 17
Node Found with key 98 and value 43
Node Found with key 111 and value 2
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 112 and value 14
Node Found with key 47 and value 41
Node Found with key 38 and value 18
Node Found with key 82 and value 51
Node Found with key 131 and value 32
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 90 and value 109
Node Found with key 45 and value 27
Node Found with key 32 and value 29
Node Found with key 77 and value 64
Node Found with key 129 and value 55
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 51 and value 40
Node Found with key 31 and value 11
Node Found with key 47 and value 89
Node Found with key 116 and value 28
Node Found with key 111 and value 35
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 105 and value 12
Node Found with key 45 and value 24
Node Found with key 22 and value 30
Node Found with key 91 and value 40
Node Found with key 97 and value 9
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 84 and value 69
Node Found with key 46 and value 42
Node Found with key 19 and value 37
Node Found with key 100 and value 61
Node Found with key 135 and value 105
ERROR! Success
ERROR! Success
100 operations are done !!!!
ERROR! Success
100 operations are done !!!!
ERROR! Success
100 operations are done !!!!
ERROR! Success
100 operations are done !!!!
Node Found with key 37 and value 27
ERROR! Invalid argument
100 operations are done !!!!
*************** Dumping all the objects from the hashtable *****************
key = 47  data = 89 
key = 0  data = 26 
key = 86  data = 51 
key = 73  data = 90 
key = 123  data = 85 
key = 31  data = 11 
key = 10  data = 36 
key = 120  data = 64 
key = 60  data = 6 
key = 52  data = 84 
key = 39  data = 9 
key = 89  data = 71 
key = 68  data = 8 
key = 2  data = 17 
key = 81  data = 36 
key = 102  data = 30 
key = 18  data = 33 
key = 107  data = 93 
key = 78  data = 88 
key = 115  data = 104 
key = 26  data = 24 
key = 99  data = 16 
key = 133  data = 47 
key = 136  data = 63 
key = 36  data = 21 
key = 112  data = 14 
key = 91  data = 40 
key = 65  data = 38 
key = 94  data = 2 
key = 13  data = 23 
key = 5  data = 35 
key = 57  data = 8 
key = 128  data = 79 
key = 44  data = 50 
key = 34  data = 35 
key = 23  data = 56 
key = 28  data = 2 
key = 135  data = 105 
key = 75  data = 65 
key = 67  data = 1 
key = 15  data = 1 
key = 62  data = 59 
key = 7  data = 35 
key = 83  data = 67 
key = 72  data = 67 
key = 88  data = 58 
key = 25  data = 28 
key = 70  data = 4 
key = 114  data = 82 
key = 12  data = 1 
key = 138  data = 70 
key = 59  data = 25 
key = 54  data = 51 
key = 41  data = 55 
key = 101  data = 104 
key = 117  data = 109 
key = 109  data = 107 
key = 93  data = 29 
key = 33  data = 48 
key = 130  data = 128 
key = 96  data = 102 
key = 49  data = 19 
key = 4  data = 20 
key = 125  data = 28 
key = 122  data = 117 
key = 38  data = 18 
key = 104  data = 110 
key = 127  data = 37 
key = 20  data = 4 
key = 46  data = 42 
key = 80  data = 115 
key = 14  data = 24 
key = 95  data = 84 
key = 103  data = 135 
key = 129  data = 55 
key = 77  data = 64 
key = 137  data = 81 
key = 17  data = 30 
key = 132  data = 54 
key = 98  data = 43 
key = 43  data = 37 
key = 74  data = 69 
key = 140  data = 1 
key = 19  data = 37 
key = 51  data = 40 
key = 90  data = 109 
key = 22  data = 30 
key = 108  data = 110 
key = 85  data = 13 
key = 119  data = 2 
key = 40  data = 34 
key = 9  data = 9 
key = 30  data = 36 
key = 82  data = 51 
key = 48  data = 59 
key = 56  data = 38 
key = 124  data = 83 
key = 116  data = 28 
key = 111  data = 35 
key = 1  data = 35 
key = 35  data = 16 
key = 64  data = 2 
key = 106  data = 87 
key = 27  data = 5 
key = 69  data = 86 
key = 37  data = 27 
key = 11  data = 18 
key = 121  data = 82 
key = 66  data = 95 
key = 139  data = 128 
key = 32  data = 29 
key = 79  data = 64 
key = 42  data = 30 
key = 113  data = 89 
key = 63  data = 25 
key = 55  data = 11 
key = 134  data = 3 
key = 58  data = 52 
key = 87  data = 73 
key = 71  data = 90 
key = 131  data = 32 
key = 118  data = 43 
key = 16  data = 11 
key = 76  data = 66 
key = 24  data = 19 
key = 53  data = 14 
key = 45  data = 24 
key = 84  data = 69 
key = 92  data = 56 
key = 21  data = 22 
key = 3  data = 17 
key = 110  data = 77 
key = 105  data = 12 
key = 50  data = 7 
key = 29  data = 1 
key = 100  data = 61 
key = 126  data = 33 
key = 8  data = 21 
key = 97  data = 9 
Please enter the offset:-Node inserted with key 85 and value 46
Node inserted with key 80 and value 115
Node inserted with key 47 and value 35
Node inserted with key 26 and value 12
Node inserted with key 123 and value 101
Node inserted with key 27 and value 27
Node inserted with key 97 and value 19
Node inserted with key 49 and value 26
Node inserted with key 34 and value 6
Node inserted with key 103 and value 16
Node inserted with key 26 and value 8
Node inserted with key 100 and value 69
Node inserted with key 70 and value 30
Node inserted with key 44 and value 43
Node inserted with key 129 and value 75
Node inserted with key 16 and value 2
Node inserted with key 108 and value 18
Node inserted with key 65 and value 67
Node inserted with key 57 and value 16
Node inserted with key 130 and value 2
Node inserted with key 5 and value 13
Node inserted with key 107 and value 119
Node inserted with key 68 and value 37
Node inserted with key 26 and value 44
Node inserted with key 118 and value 50
Node inserted with key 13 and value 6
Node inserted with key 1 and value 5
Node inserted with key 26 and value 7
Node inserted with key 105 and value 33
Node inserted with key 60 and value 50
Node inserted with key 115 and value 101
Node inserted with key 50 and value 80
Node inserted with key 11 and value 25
Node inserted with key 107 and value 9
Node inserted with key 56 and value 17
Node inserted with key 66 and value 95
Node inserted with key 134 and value 45
Node inserted with key 25 and value 7
Node inserted with key 94 and value 44
Node inserted with key 37 and value 50
Node inserted with key 68 and value 8
Node inserted with key 36 and value 18
Node inserted with key 124 and value 4
Node inserted with key 109 and value 11
Node inserted with key 52 and value 19
Node inserted with key 113 and value 60
Node inserted with key 78 and value 68
Node inserted with key 24 and value 12
Node inserted with key 90 and value 66
Node inserted with key 36 and value 59
Node inserted with key 129 and value 70
Node inserted with key 52 and value 78
Node inserted with key 43 and value 21
Node inserted with key 2 and value 22
Node inserted with key 110 and value 12
Node inserted with key 130 and value 36
Node inserted with key 81 and value 80
Node inserted with key 43 and value 1
Node inserted with key 89 and value 89
Node inserted with key 24 and value 19
Node inserted with key 116 and value 129
Node inserted with key 97 and value 17
Node inserted with key 40 and value 11
Node inserted with key 40 and value 35
Node inserted with key 113 and value 7
Node inserted with key 119 and value 136
Node inserted with key 44 and value 53
Node inserted with key 7 and value 5
Node inserted with key 46 and value 23
Node inserted with key 106 and value 104
Node inserted with key 133 and value 31
Node inserted with key 58 and value 29
Node inserted with key 3 and value 19
Node inserted with key 23 and value 48
Node inserted with key 87 and value 35
Node inserted with key 15 and value 29
Node inserted with key 129 and value 123
Node inserted with key 65 and value 45
Node inserted with key 54 and value 51
Node inserted with key 101 and value 35
Node inserted with key 97 and value 88
Node inserted with key 11 and value 28
Node inserted with key 78 and value 50
Node inserted with key 28 and value 40
Node inserted with key 128 and value 44
Node inserted with key 12 and value 34
Node inserted with key 92 and value 56
Node inserted with key 57 and value 91
Node inserted with key 43 and value 25
Node inserted with key 128 and value 56
Node inserted with key 21 and value 31
Node inserted with key 96 and value 28
Node inserted with key 41 and value 7
Node inserted with key 60 and value 1
Node inserted with key 134 and value 135
Node inserted with key 39 and value 37
Node inserted with key 102 and value 73
Node inserted with key 78 and value 28
Node inserted with key 47 and value 51
Node inserted with key 108 and value 9
Node inserted with key 139 and value 104
Node inserted with key 38 and value 3
Node inserted with key 85 and value 38
Node inserted with key 48 and value 40
Node inserted with key 98 and value 58
Node inserted with key 3 and value 8
Node inserted with key 122 and value 117
Node inserted with key 77 and value 96
Node inserted with key 56 and value 3
Node inserted with key 93 and value 23
Node inserted with key 13 and value 19
Node inserted with key 101 and value 85
Node inserted with key 43 and value 90
Node inserted with key 48 and value 59
Node inserted with key 80 and value 106
Node inserted with key 27 and value 2
Node inserted with key 121 and value 104
Node inserted with key 69 and value 7
Node inserted with key 34 and value 4
Node inserted with key 103 and value 11
Node inserted with key 67 and value 28
Node inserted with key 34 and value 23
Node inserted with key 109 and value 8
Node inserted with key 22 and value 22
Node inserted with key 96 and value 10
Node inserted with key 67 and value 1
Node inserted with key 28 and value 10
Node inserted with key 105 and value 65
Node inserted with key 135 and value 136
Node inserted with key 39 and value 6
Node inserted with key 75 and value 65
Node inserted with key 37 and value 16
Node inserted with key 116 and value 98
Node inserted with key 127 and value 37
Node inserted with key 31 and value 44
Node inserted with key 81 and value 36
Node inserted with key 39 and value 19
Node inserted with key 112 and value 70
Node inserted with key 103 and value 71
Node inserted with key 36 and value 11
Node inserted with key 100 and value 30
Node inserted with key 10 and value 14
Node inserted with key 92 and value 3
Node inserted with key 108 and value 61
Node inserted with key 31 and value 16
Node inserted with key 77 and value 73
Node inserted with key 39 and value 28
Node inserted with key 101 and value 55
Node inserted with key 113 and value 66
Node inserted with key 24 and value 0
Node inserted with key 95 and value 84
Node inserted with key 16 and value 22
Node inserted with key 88 and value 67
Node inserted with key 130 and value 96
Node inserted with key 25 and value 18
Node inserted with key 84 and value 12
Node inserted with key 18 and value 12
Node inserted with key 99 and value 9
Node inserted with key 102 and value 30
Node inserted with key 60 and value 47
Node inserted with key 98 and value 21
Node inserted with key 40 and value 72
Node inserted with key 8 and value 15
Node inserted with key 114 and value 139
Node inserted with key 34 and value 44
Node inserted with key 88 and value 91
Node inserted with key 72 and value 67
Node inserted with key 33 and value 48
Node inserted with key 38 and value 30
Node inserted with key 111 and value 98
Node inserted with key 89 and value 64
Node inserted with key 41 and value 69
Node inserted with key 32 and value 1
Node inserted with key 20 and value 4
Node inserted with key 131 and value 32
Node inserted with key 44 and value 50
Node inserted with key 105 and value 105
Node inserted with key 49 and value 19
Node inserted with key 19 and value 2
Node inserted with key 118 and value 133
Node inserted with key 52 and value 90
Node inserted with key 108 and value 110
Node inserted with key 36 and value 21
Node inserted with key 13 and value 16
Node inserted with key 105 and value 55
Node inserted with key 100 and value 4
Node inserted with key 113 and value 89
Node inserted with key 23 and value 56
Node inserted with key 3 and value 15
Node inserted with key 121 and value 82
Node inserted with key 52 and value 84
Node inserted with key 84 and value 85
Node inserted with key 30 and value 7
Node inserted with key 46 and value 13
Node inserted with key 140 and value 54
Node inserted with key 62 and value 59
Node inserted with key 114 and value 82
Node inserted with key 40 and value 26
Node inserted with key 57 and value 1
Node inserted with key 125 and value 28
Adding Nodes Done !!!!
Adding Nodes Done !!!!
Adding Nodes Done !!!!
Adding Nodes Done !!!!
Adding Nodes Done !!!!
Node Found with key 98 and value 48
Node Found with key 85 and value 13
Node Found with key 57 and value 8
Node Found with key 107 and value 126
Node Found with key 37 and value 9
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
ERROR! Success
Node Found with key 120 and value 6
Node Found with key 73 and value 90
ERROR! Invalid argument
ERROR! Invalid argument
Node Found with key 50 and value 17
Node Found with key 107 and value 93
Node Found with key 2 and value 17
Node Found with key 71 and value 92
ERROR! Invalid argument
ERROR! Success
Node Found with key 118 and value 45
ERROR! Success
Node Found with key 17 and value 9
ERROR! Success
Node Found with key 22 and value 8
Node Found with key 69 and value 96
ERROR! Invalid argument
Node Found with key 117 and value 20
Node Found with key 109 and value 81
ERROR! Invalid argument
ERROR! Invalid argument
Node Found with key 35 and value 24
ERROR! Invalid argument
ERROR! Success
Node Found with key 28 and value 2
ERROR! Invalid argument
Node Found with key 103 and value 47
Node Found with key 70 and value 97
ERROR! Invalid argument
Node Found with key 30 and value 28
ERROR! Invalid argument
ERROR! Success
Node Found with key 131 and value 82
Node Found with key 106 and value 43
ERROR! Invalid argument
Node Found with key 91 and value 81
ERROR! Invalid argument
ERROR! Invalid argument
Node Found with key 54 and value 3
Node Found with key 38 and value 18
ERROR! Invalid argument
ERROR! Invalid argument
ERROR! Success
Node Found with key 132 and value 54
ERROR! Invalid argument
Node Found with key 89 and value 71
Node Found with key 45 and value 27
ERROR! Invalid argument
ERROR! Invalid argument
Node Found with key 57 and value 92
ERROR! Invalid argument
Node Found with key 132 and value 129
ERROR! Invalid argument
Node Found with key 10 and value 29
Node Found with key 109 and value 55
Node Found with key 45 and value 24
ERROR! Invalid argument
Node Found with key 47 and value 0
ERROR! Invalid argument
ERROR! Invalid argument
ERROR! Invalid argument
Node Found and deleted with key 47 and value 0
Node Found with key 31 and value 11
Node Found with key 140 and value 69
Node Found with key 116 and value 28
Node Found with key 31 and value 35
Node Found with key 46 and value 44
ERROR! Invalid argument
ERROR! Invalid argument
ERROR! Invalid argument
ERROR! Invalid argument
Node Found with key 85 and value 32
ERROR! Invalid argument
Node Found with key 22 and value 30
Node Found with key 45 and value 20
Node Found with key 117 and value 129
Node Found with key 90 and value 42
ERROR! Invalid argument
ERROR! Invalid argument
ERROR! Invalid argument
ERROR! Invalid argument
Node Found with key 104 and value 69
ERROR! Invalid argument
ERROR! Invalid argument
Node Found with key 19 and value 37
Node Found with key 25 and value 41
Node Found with key 115 and value 105
Node Found with key 62 and value 34
Node Found with key 117 and value 87
ERROR! Invalid argument
100 operations are done !!!!
ERROR! Invalid argument
100 operations are done !!!!
ERROR! Invalid argument
100 operations are done !!!!
ERROR! Invalid argument
100 operations are done !!!!
ERROR! Invalid argument
100 operations are done !!!!
*************** Dumping all the objects from the hashtable *****************
key = 91  data = 81 
key = 120  data = 6 
key = 73  data = 90 
key = 99  data = 9 
key = 18  data = 12 
key = 10  data = 29 
key = 112  data = 70 
key = 31  data = 35 
key = 102  data = 30 
key = 39  data = 28 
key = 128  data = 56 
key = 23  data = 56 
key = 133  data = 31 
key = 89  data = 71 
key = 81  data = 36 
key = 2  data = 17 
key = 78  data = 28 
key = 52  data = 84 
key = 36  data = 21 
key = 94  data = 44 
key = 115  data = 105 
key = 60  data = 47 
key = 13  data = 16 
key = 68  data = 8 
key = 107  data = 93 
key = 5  data = 13 
key = 57  data = 92 
key = 65  data = 45 
key = 44  data = 50 
key = 34  data = 44 
key = 123  data = 101 
key = 26  data = 7 
key = 104  data = 69 
key = 117  data = 87 
key = 125  data = 28 
key = 62  data = 34 
key = 20  data = 4 
key = 33  data = 48 
key = 72  data = 67 
key = 114  data = 82 
key = 88  data = 91 
key = 127  data = 37 
key = 75  data = 65 
key = 135  data = 136 
key = 67  data = 1 
key = 93  data = 23 
key = 122  data = 117 
key = 38  data = 18 
key = 41  data = 69 
key = 96  data = 10 
key = 12  data = 34 
key = 28  data = 2 
key = 101  data = 55 
key = 54  data = 3 
key = 15  data = 29 
key = 46  data = 44 
key = 7  data = 5 
key = 109  data = 55 
key = 25  data = 41 
key = 130  data = 96 
key = 70  data = 97 
key = 49  data = 19 
key = 80  data = 106 
key = 132  data = 129 
key = 35  data = 24 
key = 17  data = 9 
key = 140  data = 69 
key = 30  data = 28 
key = 19  data = 37 
key = 111  data = 98 
key = 95  data = 84 
key = 22  data = 30 
key = 69  data = 96 
key = 77  data = 73 
key = 98  data = 48 
key = 48  data = 59 
key = 106  data = 43 
key = 119  data = 136 
key = 40  data = 26 
key = 116  data = 28 
key = 43  data = 90 
key = 90  data = 42 
key = 124  data = 4 
key = 56  data = 3 
key = 1  data = 5 
key = 108  data = 110 
key = 129  data = 123 
key = 103  data = 47 
key = 27  data = 2 
key = 85  data = 32 
key = 45  data = 20 
key = 71  data = 92 
key = 131  data = 82 
key = 32  data = 1 
key = 8  data = 15 
key = 84  data = 85 
key = 121  data = 82 
key = 139  data = 104 
key = 21  data = 31 
key = 92  data = 3 
key = 87  data = 35 
key = 3  data = 15 
key = 58  data = 29 
key = 110  data = 12 
key = 113  data = 89 
key = 37  data = 9 
key = 134  data = 135 
key = 66  data = 95 
key = 11  data = 28 
key = 50  data = 17 
key = 105  data = 55 
key = 118  data = 45 
key = 16  data = 22 
key = 100  data = 4 
key = 97  data = 88 





