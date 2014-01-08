try
 while true do
   let line = int_of_string (input_line stdin) in
   
   Printf.printf "%d\n" (abs line)
 done;
 None
with
 End_of_file -> None
;;
