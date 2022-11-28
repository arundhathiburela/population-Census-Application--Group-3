Splint 3.1.2 --- 21 Feb 2021

list_func.c: (in function add_zone_data)
list_func.c:23:24: Function returns with non-null global new referencing null
                      storage
  A global variable does not satisfy its annotations when control is
  transferred. (Use -globstate to inhibit warning)
   list_func.c:20:11: Storage new may become null
list_func.c:25:9: Test expression for while not boolean, type int: 1
  Test expression type is not boolean or int. (Use -predboolint to inhibit
  warning)
list_func.c:28:4: Return value (type int) ignored: scanf("%d", &new...
  Result returned by function call is not used. If this is intended, can cast
  result to (void) to eliminate message. (Use -retvalint to inhibit warning)
list_func.c:36:19: Left operand of && is non-boolean (st *):
                      (ptr) && ptr->ssid != new->ssid
  The operand of a boolean operator is not a boolean. Use +ptrnegate to allow !
  to be used on pointers. (Use -boolops to inhibit warning)
list_func.c:36:49: Only storage ptr->next assigned to unqualified (in post loop
                      increment): ptr = ptr->next
  The only reference to this storage is transferred to another reference (e.g.,
  by returning it) that does not have the only annotation. This may lead to a
  memory leak, since the new reference is not necessarily released. (Use
  -onlytrans to inhibit warning)
list_func.c:37:8: Left operand of && is non-boolean (st *):
                     (ptr) && ptr->ssid == new->ssid
list_func.c:48:9: Test expression for while not boolean, type int: 1
list_func.c:51:4: Return value (type int) ignored: scanf("%lld", &n...
list_func.c:59:19: Left operand of && is non-boolean (st *):
                      (ptr) && ptr->adhar_no != new->adhar_no
list_func.c:59:57: Only storage ptr->next assigned to unqualified (in post loop
                      increment): ptr = ptr->next
list_func.c:60:8: Left operand of && is non-boolean (st *):
                     (ptr) && ptr->adhar_no == new->adhar_no
list_func.c:70:9: Test expression for while not boolean, type int: 1
list_func.c:73:4: Return value (type int) ignored: scanf("%s", new-...
list_func.c:87:9: Test expression for while not boolean, type int: 1
list_func.c:90:17: Return value (type int) ignored: scanf("%d", &new...
list_func.c:100:17: Return value (type int) ignored: scanf("%s", new-...
list_func.c:103:23: Test expression for while not boolean, type int: 1
list_func.c:106:19: Return value (type int) ignored: scanf("%s", new-...
list_func.c:115:23: Test expression for while not boolean, type int: 1
list_func.c:118:17: Return value (type int) ignored: scanf("%s", new-...
list_func.c:130:23: Test expression for while not boolean, type int: 1
list_func.c:133:29: Return value (type int) ignored: scanf("%d", &new...
list_func.c:146:17: Return value (type int) ignored: scanf("%d", &new...
list_func.c:147:23: Test expression for while not boolean, type int: 1
list_func.c:150:25: Return value (type int) ignored: scanf("%d", &new...
list_func.c:158:23: Test expression for while not boolean, type int: 1
list_func.c:162:24: Return value (type int) ignored: scanf("%d", &new...
list_func.c:180:4: Implicitly only storage new->next (type struct population *)
                      not released before assignment: new->next = start
  A memory leak has been detected. Only-qualified storage is not released
  before the last reference to it is lost. (Use -mustfreeonly to inhibit
  warning)
list_func.c:180:4: Unqualified storage start assigned to implicitly only:
                      new->next = start
  Unqualified storage is transferred in an inconsistent way. (Use
  -unqualifiedtrans to inhibit warning)
list_func.c:185:19: Left operand of && is non-boolean (st *):
                       (ptr) && ptr->ssid < new->ssid
list_func.c:185:58: Only storage ptr->next assigned to unqualified (in post
                       loop increment): ptr = ptr->next
list_func.c:186:4: Implicitly only storage prev->next (type struct population
                      *) not released before assignment: prev->next = new
list_func.c:187:4: Unqualified storage ptr assigned to implicitly only:
                      new->next = ptr
list_func.c:188:3: Variable start is kept in false branch, but not kept in true
                      branch.
  The state of a variable is different depending on which branch is taken. This
  means no annotation can sensibly be applied to the storage. (Use -branchstate
  to inhibit warning)
   list_func.c:188:3: in false branch:
   list_func.c:187:4: Storage start becomes kept
   list_func.c:188:3: in true branch:
   list_func.c:181:4: Storage start becomes owned
list_func.c:188:3: Variable prev is kept in false branch, but not kept in true
                      branch.
   list_func.c:188:3: in false branch:
   list_func.c:187:4: Storage prev becomes kept
list_func.c:190:3: Return value (type int) ignored: scanf("%d", &ch)
list_func.c:191:2: Variable new is kept in while body, but not kept if loop is
                      not taken.
   list_func.c:191:2: in while body:
   list_func.c:186:4: Storage new becomes kept
list_func.c:191:2: Variable ptr is kept in while body, but not kept if loop is
                      not taken.
   list_func.c:191:2: in while body:
   list_func.c:188:3: Storage ptr becomes kept
list_func.c:191:2: Variable start1 is kept in while body, but not kept if loop
                      is not taken.
   list_func.c:191:2: in while body:
   list_func.c:188:3: Storage start1 becomes kept
list_func.c:191:2: Variable start2 is kept in while body, but not kept if loop
                      is not taken.
   list_func.c:191:2: in while body:
   list_func.c:188:3: Storage start2 becomes kept
list_func.c:191:2: Variable start3 is kept in while body, but not kept if loop
                      is not taken.
   list_func.c:191:2: in while body:
   list_func.c:188:3: Storage start3 becomes kept
list_func.c: (in function view_zone_data)
list_func.c:218:26: Only storage ptr->next assigned to unqualified (in post
                       loop increment): ptr = ptr->next
list_func.c:222:2: Return value (type int) ignored: system("read a")
list_func.c:223:2: Return value (type int) ignored: system("clear")
list_func.c: (in function edit_zone_data)
list_func.c:238:3: Return value (type int) ignored: system("read a")
list_func.c:239:3: Return value (type int) ignored: system("clear")
list_func.c:244:2: Return value (type int) ignored: scanf("%d", &ssid)
list_func.c:245:18: Left operand of && is non-boolean (st *):
                       (ptr) && ptr->ssid != ssid
list_func.c:245:45: Only storage ptr->next assigned to unqualified (in post
                       loop increment): ptr = ptr->next
list_func.c:249:3: Return value (type int) ignored: system("read a")
list_func.c:250:3: Return value (type int) ignored: system("clear")
list_func.c:253:8: Test expression for while not boolean, type int: 1
list_func.c:256:3: Return value (type int) ignored: scanf("%s", ptr-...
list_func.c:271:2: Return value (type int) ignored: scanf("%d", &new...
list_func.c:273:2: Return value (type int) ignored: scanf("%s", new-...
list_func.c:275:2: Return value (type int) ignored: scanf("%s", new-...
list_func.c:277:2: Return value (type int) ignored: scanf("%s", new-...
list_func.c:279:2: Return value (type int) ignored: scanf("%d", &new...
list_func.c:281:2: Return value (type int) ignored: scanf("%d", &new...
list_func.c:283:2: Return value (type int) ignored: scanf("%d", &new...
list_func.c:285:2: Return value (type int) ignored: scanf("%d", &new...
list_func.c: (in function delete_zone_data)
list_func.c:302:3: Return value (type int) ignored: system("read a")
list_func.c:303:3: Return value (type int) ignored: system("clear")
list_func.c:308:2: Return value (type int) ignored: scanf("%d", &ssid)
list_func.c:312:3: Only storage start->next assigned to unqualified:
                      start = start->next
list_func.c:313:8: Only storage ptr->next (type struct population *) derived
                      from released storage is not released (memory leak): ptr
  A storage leak due to incomplete deallocation of a structure or deep pointer
  is suspected. Unshared storage that is reachable from a reference that is
  being deallocated has not yet been deallocated. Splint assumes when an object
  is passed as an out only void pointer that the outer object will be
  deallocated, but the inner objects will not. (Use -compdestroy to inhibit
  warning)
list_func.c:313:8: Unqualified storage ptr passed as only param: free (ptr)
list_func.c:317:19: Left operand of && is non-boolean (st *):
                       (ptr) && ptr->ssid != ssid
list_func.c:317:55: Only storage ptr->next assigned to unqualified (in post
                       loop increment): ptr = ptr->next
list_func.c:321:4: Return value (type int) ignored: system("read a")
list_func.c:322:4: Return value (type int) ignored: system("clear")
list_func.c:325:3: Implicitly only storage prev->next (type struct population
                      *) not released before assignment: prev->next = ptr->next
list_func.c:326:8: Kept storage ptr passed as only param: free (ptr)
  storage is transferred to a non-temporary reference after being passed as
  keep parameter. The storage may be released or new aliases created. (Use
  -kepttrans to inhibit warning)
   list_func.c:325:3: Storage ptr becomes kept
list_func.c:327:23: Function returns with global start referencing released
                       storage
   list_func.c:326:8: Storage start released
list_func.c:327:23: Function returns with global start1 referencing released
                       storage
   list_func.c:326:8: Storage start1 released
list_func.c:327:23: Function returns with global start2 referencing released
                       storage
   list_func.c:326:8: Storage start2 released
list_func.c:327:23: Function returns with global start3 referencing released
                       storage
   list_func.c:326:8: Storage start3 released
list_func.c:327:23: Function returns with global ptr referencing released
                       storage
   list_func.c:326:8: Storage ptr released
list_func.c:327:23: Function returns with global prev referencing released
                       storage
   list_func.c:326:8: Storage prev released
list_func.c:330:2: Path with no return in function declared to return int
  There is a path through a function declared to return a value on which there
  is no return statement. This means the execution may fall through without
  returning a meaningful result to the caller. (Use -noret to inhibit warning)
list_func.c:330:2: Function returns with global start1 referencing released
                      storage
   list_func.c:313:8: Storage start1 released
list_func.c:330:2: Function returns with global start2 referencing released
                      storage
   list_func.c:313:8: Storage start2 released
list_func.c:330:2: Function returns with global start3 referencing released
                      storage
   list_func.c:313:8: Storage start3 released
list_func.c:330:2: Function returns with global ptr referencing released
                      storage
   list_func.c:313:8: Storage ptr released
list_func.c:7:5: Variable exported but not used outside list_func: start
  A declaration is exported, but not used outside this module. Declaration can
  use static qualifier. (Use -exportlocal to inhibit warning)
list_func.c:7:12: Variable exported but not used outside list_func: ptr
list_func.c:7:17: Variable exported but not used outside list_func: new
list_func.c:7:22: Variable exported but not used outside list_func: prev

Finished checking --- 88 code warnings
