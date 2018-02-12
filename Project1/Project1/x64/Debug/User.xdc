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
</members>
</doc>