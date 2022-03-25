<?xml version='1.0' encoding='UTF-8'?>
<Project Type="Project" LVVersion="20008000">
	<Item Name="我的电脑" Type="My Computer">
		<Property Name="server.app.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.control.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.tcp.enabled" Type="Bool">false</Property>
		<Property Name="server.tcp.port" Type="Int">0</Property>
		<Property Name="server.tcp.serviceName" Type="Str">我的电脑/VI服务器</Property>
		<Property Name="server.tcp.serviceName.default" Type="Str">我的电脑/VI服务器</Property>
		<Property Name="server.vi.callsEnabled" Type="Bool">true</Property>
		<Property Name="server.vi.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="specify.custom.address" Type="Bool">false</Property>
		<Item Name="rescource" Type="Folder" URL="../rescource">
			<Property Name="NI.DISK" Type="Bool">true</Property>
		</Item>
		<Item Name="subvi" Type="Folder" URL="../subvi">
			<Property Name="NI.DISK" Type="Bool">true</Property>
		</Item>
		<Item Name="main.vi" Type="VI" URL="../main.vi"/>
		<Item Name="test_program_vi.vi" Type="VI" URL="../test_program_vi.vi"/>
		<Item Name="依赖关系" Type="Dependencies">
			<Item Name="instr.lib" Type="Folder">
				<Item Name="kipcrle Clear Program.vi" Type="VI" URL="/&lt;instrlib&gt;/kipcrle/kipcrle.llb/kipcrle Clear Program.vi"/>
				<Item Name="kipcrle Close.vi" Type="VI" URL="/&lt;instrlib&gt;/kipcrle/kipcrle.llb/kipcrle Close.vi"/>
				<Item Name="kipcrle Configure Coupling Mode.vi" Type="VI" URL="/&lt;instrlib&gt;/kipcrle/kipcrle.llb/kipcrle Configure Coupling Mode.vi"/>
				<Item Name="kipcrle Configure Frequency.vi" Type="VI" URL="/&lt;instrlib&gt;/kipcrle/kipcrle.llb/kipcrle Configure Frequency.vi"/>
				<Item Name="kipcrle Configure Output Enabled.vi" Type="VI" URL="/&lt;instrlib&gt;/kipcrle/kipcrle.llb/kipcrle Configure Output Enabled.vi"/>
				<Item Name="kipcrle Configure Program Running Conditions.vi" Type="VI" URL="/&lt;instrlib&gt;/kipcrle/kipcrle.llb/kipcrle Configure Program Running Conditions.vi"/>
				<Item Name="kipcrle Configure Voltage Level.vi" Type="VI" URL="/&lt;instrlib&gt;/kipcrle/kipcrle.llb/kipcrle Configure Voltage Level.vi"/>
				<Item Name="kipcrle Configure Voltage Offset.vi" Type="VI" URL="/&lt;instrlib&gt;/kipcrle/kipcrle.llb/kipcrle Configure Voltage Offset.vi"/>
				<Item Name="kipcrle Configure Voltage Range.vi" Type="VI" URL="/&lt;instrlib&gt;/kipcrle/kipcrle.llb/kipcrle Configure Voltage Range.vi"/>
				<Item Name="kipcrle Configure.vi" Type="VI" URL="/&lt;instrlib&gt;/kipcrle/kipcrle.llb/kipcrle Configure.vi"/>
				<Item Name="kipcrle Edit Step.vi" Type="VI" URL="/&lt;instrlib&gt;/kipcrle/kipcrle.llb/kipcrle Edit Step.vi"/>
				<Item Name="kipcrle Initialize With Options.vi" Type="VI" URL="/&lt;instrlib&gt;/kipcrle/kipcrle.llb/kipcrle Initialize With Options.vi"/>
				<Item Name="kipcrle Initialize.vi" Type="VI" URL="/&lt;instrlib&gt;/kipcrle/kipcrle.llb/kipcrle Initialize.vi"/>
				<Item Name="kipcrle Initiate Program.vi" Type="VI" URL="/&lt;instrlib&gt;/kipcrle/kipcrle.llb/kipcrle Initiate Program.vi"/>
				<Item Name="kipcrle IVI Error Converter.vi" Type="VI" URL="/&lt;instrlib&gt;/kipcrle/kipcrle.llb/kipcrle IVI Error Converter.vi"/>
				<Item Name="kipcrle Query Program Execution State.vi" Type="VI" URL="/&lt;instrlib&gt;/kipcrle/kipcrle.llb/kipcrle Query Program Execution State.vi"/>
				<Item Name="kipcrle Reset.vi" Type="VI" URL="/&lt;instrlib&gt;/kipcrle/kipcrle.llb/kipcrle Reset.vi"/>
				<Item Name="kipcrle Revision Query.vi" Type="VI" URL="/&lt;instrlib&gt;/kipcrle/kipcrle.llb/kipcrle Revision Query.vi"/>
			</Item>
			<Item Name="vi.lib" Type="Folder">
				<Item Name="Error Cluster From Error Code.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Error Cluster From Error Code.vi"/>
			</Item>
			<Item Name="ivi.dll" Type="Document" URL="ivi.dll">
				<Property Name="NI.PreserveRelativePath" Type="Bool">true</Property>
			</Item>
			<Item Name="kipcrle.dll" Type="Document" URL="kipcrle.dll">
				<Property Name="NI.PreserveRelativePath" Type="Bool">true</Property>
			</Item>
		</Item>
		<Item Name="程序生成规范" Type="Build"/>
	</Item>
</Project>
