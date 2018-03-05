<?xml version="1.0"?><doc>
<members>
<member name="M:User.#ctor" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\user.h" line="8">
constructor
@param None
@return None

</member>
<member name="M:User.#ctor(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\user.h" line="14">
Creates the bool array m_Times and sets it to false. Creates the m_Strings array and populates it with the possible time slots.
@param None
@return None

</member>
<member name="M:User.Dispose" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\user.h" line="21">
Does Nothing
@param None
@return None

</member>
<member name="M:User.getUserName" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\user.h" line="28">
Returns the name of the user
@param None
@return The string representing the name of the user

</member>
<member name="M:Day.#ctor" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\day.h" line="8">
Constructor
@param None
@return None

</member>
<member name="M:Day.#ctor(System.Int32,System.Int32,System.Int32)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\day.h" line="15">
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
setTime
@param int
@return none

</member>
<member name="M:Task.#ctor" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\task.h" line="12">
Creates the object
@param none
@return none

</member>
<member name="M:Task.#ctor(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\task.h" line="20">
Creates the object
@param string name
@return none

</member>
<member name="M:Task.Dispose" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\task.h" line="28">
Does nothing
@param None
@return None

</member>
<member name="M:Task.getTaskName" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\task.h" line="35">
getTaskName
@param None
@return string

</member>
<member name="M:Task.getMaster" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\task.h" line="42">
getMaster
@param None
@return string

</member>
<member name="M:Task.setMaster(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\task.h" line="49">
setMaster
@param string name
@return None

</member>
<member name="M:Task.hasMaster" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\task.h" line="56">
hasMaster
@param None
@return bool

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
<member name="M:Event.#ctor(Day,std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;,User)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="30">
Constructor
@param Day object, Day object, string, User object
@return None

</member>
<member name="M:Event.addTask(Task)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="37">
addTask
@param Task object
@return bool

</member>
<member name="M:Event.addUser(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="44">
addUser
@param string name
@return bool

</member>
<member name="M:Event.getName" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="54">
getName
@param none
@return String

</member>
<member name="M:Event.getAdmin" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="61">
getAdmin
@param none
@return User object

</member>
<member name="M:Event.getTasks" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="68">
getTasks
@param none
@return Task vector

</member>
<member name="M:Event.getNumTasks" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="75">
getNumTaks
@param none
@return Integer

</member>
<member name="M:Event.getUsers" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="82">
getUsers
@param none
@return User vector

</member>
<member name="M:Event.getNumUsers" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="89">
getNumUsers
@param none
@return Integer

</member>
<member name="M:Event.setAdmin(User)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="98">
setAdmin
@param User admin
@return none

</member>
<member name="M:Event.setName(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="105">
setName
@param String name
@return none

</member>
<member name="M:Executive.#ctor" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\executive.h" line="12">
Creates the object
@param None
@return None

</member>
<member name="M:Executive.Dispose" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\executive.h" line="19">
Does nothing
@param None
@return None

</member>
<member name="M:Executive.AddEvent(Event)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\executive.h" line="26">
Adds a given event to the vector that stores all the events
@param An event object to be added to the vector
@return None

</member>
<member name="M:Executive.getAllEvents" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\executive.h" line="33">
Returns the name of the events that the given user is admin of
@param A string representing the name of a user
@return A vector containing the names of the events that the given user is admin of

Creates a string array and stores the names of all the events currently stored in the vector
@param None
@return An array of all the names of the events currently stored in the vector

</member>
<member name="M:Executive.getEventSize" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\executive.h" line="47">
Checks the current size of the event vector and returns it
@param None
@return The size of the event vector

</member>
<member name="M:Executive.write" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\executive.h" line="54">
Stores the events list, the users, and their avaliabilities in a file so that the information is saved between program executions
Called on save/exit
@param None
@return None

</member>
<member name="M:Executive.read" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\executive.h" line="62">
Reads the information stored in the save file and populates the events list, the users within each event, and the avaliabilites of each user
Called on startup
@param None
@return None

</member>
<member name="T:Project1.MyForm" decl="false" source="c:\users\zach\documents\github\doodle\project1\project1\myform.h" line="29">
<summary>
Summary for MyForm
</summary>
</member>
<member name="M:Project1.MyForm.Dispose" decl="false" source="c:\users\zach\documents\github\doodle\project1\project1\myform.h" line="44">
<summary>
Clean up any resources being used.
</summary>
</member>
<member name="M:Project1.MyForm.InitializeComponent" decl="false" source="c:\users\zach\documents\github\doodle\project1\project1\myform.h" line="158">
<summary>
Required designer variable.
</summary>
<summary>
Required method for Designer support - do not modify
the contents of this method with the code editor.
</summary>
</member>
</members>
</doc>