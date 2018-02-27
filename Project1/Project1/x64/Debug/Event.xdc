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
<member name="M:Day.#ctor" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\day.h" line="10">
Constructor
@param None
@return None

</member>
<member name="M:Day.#ctor(System.Int32,System.Int32,System.Int32,System.Int32)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\day.h" line="17">
Constructor
@param ints
@return None

</member>
<member name="M:Day.getMonth" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\day.h" line="24">
Constructor
@param none
@return int

</member>
<member name="M:Day.getDay" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\day.h" line="31">
Constructor
@param none
@return int

</member>
<member name="M:Day.getYear" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\day.h" line="38">
Constructor
@param none
@return int

</member>
<member name="M:Day.getTime" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\day.h" line="45">
Constructor
@param none
@return int

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
<member name="M:Event.#ctor" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="16">
Constructor
@param None
@return None

</member>
<member name="M:Event.Dispose" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="24">
Destroys the Event
@param
@return

</member>
<member name="M:Event.#ctor(Day,Day,std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;,User)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="31">
Constructor
@param Day object, Day object, string, User object
@return None

</member>
<member name="M:Event.addTask(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="38">
addTask
@param string name
@return true

</member>
<member name="M:Event.addUser(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="45">
addUser
@param string name
@return true

</member>
<member name="M:Event.getStartDay" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="52">
getStartDay
@param none
@return Day object

</member>
<member name="M:Event.getEndDay" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="59">
getEndDay
@param none
@return Day object

</member>
<member name="M:Event.getName" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="67">
getName
@param none
@return String

</member>
<member name="M:Event.getAdmin" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="74">
getAdmin
@param none
@return User object

</member>
<member name="M:Event.getTasks" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="81">
getTasks
@param none
@return Task pointer to array

</member>
<member name="M:Event.getNumTasks" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="88">
getNumTaks
@param none
@return Integer

</member>
<member name="M:Event.getUsers" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="95">
getUsers
@param none
@return Task pointer to array

</member>
<member name="M:Event.getNumUsers" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="102">
getNumUsers
@param none
@return Integer

</member>
</members>
</doc>