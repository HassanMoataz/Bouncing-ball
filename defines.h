



#ifndef DEFINES_H_
#define DEFINES_H_

//geometry
#define width   (60 + 2 * border + 1)
#define length  (25 + 1)
#define stack_width  30
#define border  2

//positions
#define midx 32
#define midy 12
#define spacex  ((width - 1) / 2) - (space_len - 1) / 2 
#define spacey (length - 4)


#define ball 'O'
#define slab_len  12
#define space_len  15


#define slab_type_number (5) % 6
//					  0 <   < 6 
#define true_ratio 8
#define speed_reciprocal 20

//boundaries
#define left_bond  3
#define right_bond  (width - 2)
#define up_bond  2
#define down_bond  (length - 4)

#endif // !DEFINES_H_
