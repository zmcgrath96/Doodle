<?xml version="1.0"?><doc>
<members>
<member name="M:User.#ctor" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\user.h" line="8">
Creates the bool array m_Times and sets it to false. Creates the m_Strings array and populates it with the possible time slots.
@param None
@return None

</member>
<member name="M:User.Dispose" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\user.h" line="15">
Does Nothing
@param None
@return None

</member>
<member name="M:User.setName(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\user.h" line="22">
Sets the user's name
@param String representing the name of the user
@return None

</member>
<member name="M:User.getUserName" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\user.h" line="29">
Returns the name of the user
@param None
@return The string representing the name of the user

</member>
<member name="M:User.getTime(System.Int32)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\user.h" line="36">
Returns a bool at the index passed in which represents whether the user is avaliable at that time
@param An int representing an index in the boolean array m_Times
@return The boolean stored at the given index

</member>
<member name="M:User.getStrings(System.Int32)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\user.h" line="43">
Returns the string at the index passed in which represents a time slot
@param An int representing an index in the string array m_Strings
@return The string at the given index

</member>
<member name="M:User.AddTime(System.Int32)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\user.h" line="50">
Toggles the bool at the given index
@param An index representing a bool in m_Times
@return None

</member>
<member name="M:User.getTimes" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\user.h" line="57">
Prints the times that the user is avaliable
@param None
@return None

</member>
<member name="M:Event.#ctor" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="11">
Creates an int array to store the number of users avaliable at the cooresponding time slot
@param None
@return None

</member>
<member name="M:Event.#ctor(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;,std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="18">
Stores the name and date of the event
@param Two strings that represent the name and date of the event
@return None

</member>
<member name="M:Event.setEventName(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="25">
Takes in a string representing the name of the event and saves it
@param A string representing the name of the event
@return None

</member>
<member name="M:Event.setEventDate(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="32">
Takes in a string representing the date of the event and saves it
@param A string representing the date of the event
@return None

</member>
<member name="M:Event.getName" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="39">
Returns the name of the event
@param None
@return A string representing the name of the event

</member>
<member name="M:Event.getDate" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="46">
Returns the date of the event
@param None
@return A string representing the date of the event

</member>
<member name="M:Event.getAvailableTimes" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="53">
Prints the number of users avaliable at each time slot while also saving the numbers to NumOfUs
@param None
@return None

</member>
<member name="M:Event.addUser(User)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="60">
Adds a given user to the event
@param A user to be added to the event
@return None

</member>
<member name="M:Event.setAdmin(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="67">
Takes in the name of the admin for the event and stores it
@param A string representing the name of the admin for the event
@return None

</member>
<member name="M:Event.setNumOfUs(System.Int32,System.Int32)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="74">
Stores the number of users avaliable at a specified time slot
@param Two ints representing the index of the time slot and the number of users avaliable for that time
@return None

</member>
<member name="M:Event.getAdmin" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="81">
Returns the name of the admin for the event
@param None
@return A string representing the name of the admin for the event

</member>
<member name="M:Event.getNumOfUs(System.Int32)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="88">
Takes in an index cooresponding to a time slot and returns the number of users avaliable for that time slot
@param An int representing the index of the time slot desired
@return An int representing the number of users avaliable at the time slot

</member>
<member name="M:Event.Print" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\event.h" line="95">
Prints the number of users avaliable at each time slot
@param None
@return None

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
@param An event to be added to the vector
@return None

</member>
<member name="M:Executive.checkAval(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\executive.h" line="33">
Returns the name of the events that the given user is admin of
@param A string representing the name of a user
@return A vector containing the names of the events that the given user is admin of

</member>
<member name="M:Executive.getAllEvents" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\executive.h" line="40">
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
@param None
@return None

</member>
<member name="M:Executive.read" decl="true" source="c:\users\zach\documents\github\doodle\project1\project1\executive.h" line="61">
Reads the information stored in the save file and populates the events list, the users within each event, and the avaliabilites of each user
@param None
@return None

</member>
<member name="T:Project1.MyForm" decl="false" source="c:\users\zach\documents\github\doodle\project1\project1\myform.h" line="20">
<summary>
Summary for MyForm
</summary>
</member>
<member name="M:Project1.MyForm.Dispose" decl="false" source="c:\users\zach\documents\github\doodle\project1\project1\myform.h" line="35">
<summary>
Clean up any resources being used.
</summary>
</member>
<member name="M:Project1.MyForm.InitializeComponent" decl="false" source="c:\users\zach\documents\github\doodle\project1\project1\myform.h" line="272">
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