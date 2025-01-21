<?xml version="1.0"?>
<flowgorithm fileversion="3.0">
    <attributes>
        <attribute name="name" value=""/>
        <attribute name="authors" value="ASUS"/>
        <attribute name="about" value=""/>
        <attribute name="saved" value="2023-09-09 08:45:29 PM"/>
        <attribute name="created" value="QVNVUztMQVBUT1AtSUwwT0tTQTg7MjAyMy0wOS0wOTswODozNjozNiBQTTsyNjc1"/>
        <attribute name="edited" value="QVNVUztMQVBUT1AtSUwwT0tTQTg7MjAyMy0wOS0wOTswODo0NToyOSBQTTsxOzI3ODU="/>
    </attributes>
    <function name="Main" type="None" variable="">
        <parameters/>
        <body>
            <declare name="X, Y, Z, uang, jumlahbeli, sisauang" type="Integer" array="False" size=""/>
            <assign variable="X" expression="8000"/>
            <assign variable="Y" expression="35000"/>
            <assign variable="Z" expression="39000"/>
            <assign variable="jumlahbeli" expression="2*(X+Y+Z)"/>
            <assign variable="uang" expression="310000"/>
            <assign variable="sisauang" expression="uang+jumlahbeli"/>
            <output expression="jumlahbeli" newline="True"/>
            <output expression="sisauang" newline="True"/>
        </body>
    </function>
</flowgorithm>
