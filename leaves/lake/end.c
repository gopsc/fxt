




void *  end_fst_leaves_lake ()

{


void *  note_numbers_counts;

note_numbers_counts   =   create_fst_things_data  (  1 * sizeof ( int )  );




for

(

* ( int * ) note_numbers_counts  =  1;

* ( int * ) note_numbers_counts  <=  * ( int * ) that_fst_leaves_lake  [ 0 ] [ 1 ];

* ( int * ) note_numbers_counts  =  * ( int * ) note_numbers_counts   +   1

)

{

free_fst_things_data   (  that_fst_leaves_lake  [  * ( int * ) note_numbers_counts  ] [ 1 ]  );

free_fst_things_data   (  that_fst_leaves_lake  [  * ( int * ) note_numbers_counts  ] [ 0 ]  );

free_fst_things_data   (  that_fst_leaves_lake  [  * ( int * ) note_numbers_counts  ]  );

}

free_fst_things_data  (  note_numbers_counts );





free_fst_things_data  (  that_fst_leaves_lake  [ 0 ] [ 1 ]  );

free_fst_things_data  (  that_fst_leaves_lake  [ 0 ] [ 0 ]  );

free_fst_things_data  (  that_fst_leaves_lake  [ 0 ]  );

free_fst_things_data  (  that_fst_leaves_lake  );



that_fst_leaves_lake  =  0;






return  that_fst_leaves_lake;

}
