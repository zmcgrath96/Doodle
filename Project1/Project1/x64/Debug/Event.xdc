<?xml version="1.0"?><doc>
<members>
<member name="M:User.#ctor(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\user.h" line="9">
Creates the bool array m_Times and sets it to false. Creates the m_Strings array and populates it with the possible time slots.
@param None
@return None

</member>
<member name="M:User.Dispose" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\user.h" line="16">
Does Nothing
@param None
@return None

</member>
<member name="M:User.getUserName" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\user.h" line="23">
Returns the name of the user
@param None
@return The string representing the name of the user

</member>
<member name="M:Day.#ctor" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\day.h" line="8">
Constructor
@param None
@return None

</member>
<member name="M:Day.#ctor(System.Int32,System.Int32,System.Int32,System.Int32)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\day.h" line="15">
Constructor
@param ints
@return None

</member>
<member name="M:Day.getMonth" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\day.h" line="22">
getMonth
@param none
@return int

</member>
<member name="M:Day.getDay" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\day.h" line="29">
getDay
@param none
@return int

</member>
<member name="M:Day.getYear" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\day.h" line="36">
getYear
@param none
@return int

</member>
<member name="M:Day.getTime" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\day.h" line="43">
getTime
@param none
@return int

</member>
<member name="M:Day.setMonth(System.Int32)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\day.h" line="50">
setMonth
@param int
@return none

</member>
<member name="M:Day.setDay(System.Int32)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\day.h" line="57">
setDay
@param int
@return none

</member>
<member name="M:Day.setYear(System.Int32)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\day.h" line="64">
setYear
@param int
@return none

</member>
<member name="M:Day.setTime(System.Int32)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\day.h" line="70">
setMonth
@param int
@return none

</member>
<member name="M:Task.#ctor" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\task.h" line="12">
Creates the object
@param none
@return

</member>
<member name="M:Task.#ctor(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\task.h" line="20">
Creates the object
@param
@return

</member>
<member name="M:Task.Dispose" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\task.h" line="28">
Does nothing
@param None
@return None

</member>
<member name="M:Event.#ctor" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="15">
Constructor
@param None
@return None

</member>
<member name="M:Event.Dispose" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="23">
Destroys the Event
@param
@return

</member>
<member name="M:Event.#ctor(Day,Day,std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;,User)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="30">
Constructor
@param Day object, Day object, string, User object
@return None

</member>
<member name="M:Event.addTask(Task)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="37">
addTask
@param string name
@return true

</member>
<member name="M:Event.addUser(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="44">
addUser
@param string name
@return true

</member>
<member name="M:Event.getStartDay" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="51">
getStartDay
@param none
@return Day object

</member>
<member name="M:Event.getEndDay" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="58">
getEndDay
@param none
@return Day object

</member>
<member name="M:Event.getName" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="66">
getName
@param none
@return String

</member>
<member name="M:Event.getAdmin" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="73">
getAdmin
@param none
@return User object

</member>
<member name="M:Event.getTasks" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="80">
getTasks
@param none
@return Task pointer to array

</member>
<member name="M:Event.getNumTasks" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="87">
getNumTaks
@param none
@return Integer

</member>
<member name="M:Event.getUsers" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="94">
getUsers
@param none
@return Task pointer to array

</member>
<member name="M:Event.getNumUsers" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="101">
getNumUsers
@param none
@return Integer

</member>
<member name="M:Event.setStartDay(Day)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="108">
setStartDay
@param Day start

</member>
<member name="M:Event.setEndDay(Day)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="114">
setEndDay
@param Day end

</member>
<member name="M:Event.setAdmin(User)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="120">
setAdmin
@param User admin

</member>
<member name="M:Event.setName(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="126">
setName
@param String name

</member>
</members>
</doc>