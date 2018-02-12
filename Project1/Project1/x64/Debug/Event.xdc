<?xml version="1.0"?><doc>
<members>
<member name="M:User.#ctor" decl="true" source="c:\users\tanner\documents\github\doodle\project1\project1\user.h" line="8">
Creates the bool array m_Times and sets it to false. Creates the m_Strings array and populates it with the possible time slots.
@param None
@return None

</member>
<member name="M:User.Dispose" decl="true" source="c:\users\tanner\documents\github\doodle\project1\project1\user.h" line="15">
Does Nothing
@param None
@return None

</member>
<member name="M:User.setName(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="true" source="c:\users\tanner\documents\github\doodle\project1\project1\user.h" line="22">
Sets the user's name
@param String representing the name of the user
@return None

</member>
<member name="M:User.getUserName" decl="true" source="c:\users\tanner\documents\github\doodle\project1\project1\user.h" line="29">
Returns the name of the user
@param None
@return The string representing the name of the user

</member>
<member name="M:User.getTime(System.Int32)" decl="true" source="c:\users\tanner\documents\github\doodle\project1\project1\user.h" line="36">
Returns a bool at the index passed in which represents whether the user is avaliable at that time
@param An int representing an index in the boolean array m_Times
@return The boolean stored at the given index

</member>
<member name="M:User.getStrings(System.Int32)" decl="true" source="c:\users\tanner\documents\github\doodle\project1\project1\user.h" line="43">
Returns the string at the index passed in which represents a time slot
@param An int representing an index in the string array m_Strings
@return The string at the given index

</member>
<member name="M:User.AddTime(System.Int32)" decl="true" source="c:\users\tanner\documents\github\doodle\project1\project1\user.h" line="50">
Toggles the bool at the given index
@param An index representing a bool in m_Times
@return None

</member>
<member name="M:User.getTimes" decl="true" source="c:\users\tanner\documents\github\doodle\project1\project1\user.h" line="57">
Prints the times that the user is avaliable
@param None
@return None

</member>
<member name="M:Event.#ctor" decl="true" source="c:\users\tanner\documents\github\doodle\project1\project1\event.h" line="11">
Creates an int array to store the number of users avaliable at the cooresponding time slot
@param None
@return None

</member>
<member name="M:Event.#ctor(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;,std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="true" source="c:\users\tanner\documents\github\doodle\project1\project1\event.h" line="18">
Stores the name and date of the event
@param Two strings that represent the name and date of the event
@return None

</member>
<member name="M:Event.setEventName(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="true" source="c:\users\tanner\documents\github\doodle\project1\project1\event.h" line="25">
Takes in a string representing the name of the event and saves it
@param A string representing the name of the event
@return None

</member>
<member name="M:Event.setEventDate(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="true" source="c:\users\tanner\documents\github\doodle\project1\project1\event.h" line="32">
Takes in a string representing the date of the event and saves it
@param A string representing the date of the event
@return None

</member>
<member name="M:Event.getName" decl="true" source="c:\users\tanner\documents\github\doodle\project1\project1\event.h" line="39">
Returns the name of the event
@param None
@return A string representing the name of the event

</member>
<member name="M:Event.getDate" decl="true" source="c:\users\tanner\documents\github\doodle\project1\project1\event.h" line="46">
Returns the date of the event
@param None
@return A string representing the date of the event

</member>
<member name="M:Event.getAvailableTimes" decl="true" source="c:\users\tanner\documents\github\doodle\project1\project1\event.h" line="53">
Prints the number of users avaliable at each time slot while also saving the numbers to NumOfUs
@param None
@return None

</member>
<member name="M:Event.addUser(User)" decl="true" source="c:\users\tanner\documents\github\doodle\project1\project1\event.h" line="60">
Adds a given user to the event
@param A user to be added to the event
@return None

</member>
<member name="M:Event.setAdmin(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="true" source="c:\users\tanner\documents\github\doodle\project1\project1\event.h" line="67">
Takes in the name of the admin for the event and stores it
@param A string representing the name of the admin for the event
@return None

</member>
<member name="M:Event.setNumOfUs(System.Int32,System.Int32)" decl="true" source="c:\users\tanner\documents\github\doodle\project1\project1\event.h" line="74">
Stores the number of users avaliable at a specified time slot
@param Two ints representing the index of the time slot and the number of users avaliable for that time
@return None

</member>
<member name="M:Event.getAdmin" decl="true" source="c:\users\tanner\documents\github\doodle\project1\project1\event.h" line="81">
Returns the name of the admin for the event
@param None
@return A string representing the name of the admin for the event

</member>
<member name="M:Event.getNumOfUs(System.Int32)" decl="true" source="c:\users\tanner\documents\github\doodle\project1\project1\event.h" line="88">
Takes in an index cooresponding to a time slot and returns the number of users avaliable for that time slot
@param An int representing the index of the time slot desired
@return An int representing the number of users avaliable at the time slot

</member>
<member name="M:Event.Print" decl="true" source="c:\users\tanner\documents\github\doodle\project1\project1\event.h" line="95">
Prints the number of users avaliable at each time slot
@param None
@return None

</member>
<member name="M:Event.setEventName(std.basic_string&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator&lt;System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte&gt;&gt;)" decl="false" source="c:\users\tanner\documents\github\doodle\project1\project1\event.cpp" line="18">
<summary>
Returns event name
</summary>
</member>
<!-- Discarding badly formed XML document comment for member 'M:Event.setEventDate(std.basic_string<System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte,std.char_traits{System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte},std.allocator<System.SByte!System.Runtime.CompilerServices.IsSignUnspecifiedByte>>)'. -->
<member name="M:Event.getName" decl="false" source="c:\users\tanner\documents\github\doodle\project1\project1\event.cpp" line="35">
<summary>
Returns name
</summary>
</member>
<member name="M:Event.getDate" decl="false" source="c:\users\tanner\documents\github\doodle\project1\project1\event.cpp" line="43">
<summary>
Returns date
</summary>
</member>
<member name="M:Event.getAvailableTimes" decl="false" source="c:\users\tanner\documents\github\doodle\project1\project1\event.cpp" line="67">
<summary>
Returns available times
</summary>
</member>
<member name="M:Event.addUser(User)" decl="false" source="c:\users\tanner\documents\github\doodle\project1\project1\event.cpp" line="98">
<summary>
adds user
</summary>
</member>
</members>
</doc>