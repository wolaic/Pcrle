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
		<Item Name="doc" Type="Folder" URL="../doc">
			<Property Name="NI.DISK" Type="Bool">true</Property>
		</Item>
		<Item Name="lib" Type="Folder" URL="../lib">
			<Property Name="NI.DISK" Type="Bool">true</Property>
		</Item>
		<Item Name="rescource" Type="Folder" URL="../rescource">
			<Property Name="NI.DISK" Type="Bool">true</Property>
		</Item>
		<Item Name="Serial Port" Type="Folder" URL="../Serial Port">
			<Property Name="NI.DISK" Type="Bool">true</Property>
		</Item>
		<Item Name="subvi" Type="Folder">
			<Item Name="random.vi" Type="VI" URL="../sub/random.vi"/>
			<Item Name="read_compare.vi" Type="VI" URL="../sub/read_compare.vi"/>
			<Item Name="TCPConnectSendRead.vi" Type="VI" URL="../sub/TCPConnectSendRead.vi"/>
			<Item Name="test_program_vi.vi" Type="VI" URL="../sub/test_program_vi.vi"/>
			<Item Name="统一指令集.ctl" Type="VI" URL="../sub/统一指令集.ctl"/>
			<Item Name="统一指令集.vi" Type="VI" URL="../sub/统一指令集.vi"/>
			<Item Name="自适应屏幕分辨率.vi" Type="VI" URL="../sub/自适应屏幕分辨率.vi"/>
		</Item>
		<Item Name="main.vi" Type="VI" URL="../main.vi"/>
		<Item Name="依赖关系" Type="Dependencies">
			<Item Name="instr.lib" Type="Folder">
				<Item Name="kipcrle Clear Program.vi" Type="VI" URL="/&lt;instrlib&gt;/kipcrle/kipcrle.llb/kipcrle Clear Program.vi"/>
				<Item Name="kipcrle Close.vi" Type="VI" URL="/&lt;instrlib&gt;/kipcrle/kipcrle.llb/kipcrle Close.vi"/>
				<Item Name="kipcrle Configure Coupling Mode.vi" Type="VI" URL="/&lt;instrlib&gt;/kipcrle/kipcrle.llb/kipcrle Configure Coupling Mode.vi"/>
				<Item Name="kipcrle Configure Current Limit.vi" Type="VI" URL="/&lt;instrlib&gt;/kipcrle/kipcrle.llb/kipcrle Configure Current Limit.vi"/>
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
				<Item Name="Random Number (Range) DBL.vi" Type="VI" URL="/&lt;vilib&gt;/numeric/Random Number (Range) DBL.vi"/>
				<Item Name="Random Number (Range) I64.vi" Type="VI" URL="/&lt;vilib&gt;/numeric/Random Number (Range) I64.vi"/>
				<Item Name="Random Number (Range) U64.vi" Type="VI" URL="/&lt;vilib&gt;/numeric/Random Number (Range) U64.vi"/>
				<Item Name="Random Number (Range).vi" Type="VI" URL="/&lt;vilib&gt;/numeric/Random Number (Range).vi"/>
				<Item Name="sub_Random U32.vi" Type="VI" URL="/&lt;vilib&gt;/numeric/sub_Random U32.vi"/>
				<Item Name="subTimeDelay.vi" Type="VI" URL="/&lt;vilib&gt;/express/express execution control/TimeDelayBlock.llb/subTimeDelay.vi"/>
				<Item Name="Synchronize Data Flow.vim" Type="VI" URL="/&lt;vilib&gt;/Utility/Synchronize Data Flow.vim"/>
				<Item Name="VISA Configure Serial Port" Type="VI" URL="/&lt;vilib&gt;/Instr/_visa.llb/VISA Configure Serial Port"/>
				<Item Name="VISA Configure Serial Port (Instr).vi" Type="VI" URL="/&lt;vilib&gt;/Instr/_visa.llb/VISA Configure Serial Port (Instr).vi"/>
				<Item Name="VISA Configure Serial Port (Serial Instr).vi" Type="VI" URL="/&lt;vilib&gt;/Instr/_visa.llb/VISA Configure Serial Port (Serial Instr).vi"/>
				<Item Name="VISA Flush IO Buffer Mask.ctl" Type="VI" URL="/&lt;vilib&gt;/Instr/_visa.llb/VISA Flush IO Buffer Mask.ctl"/>
				<Item Name="VISA Set IO Buffer Mask.ctl" Type="VI" URL="/&lt;vilib&gt;/Instr/_visa.llb/VISA Set IO Buffer Mask.ctl"/>
			</Item>
			<Item Name="ivi.dll" Type="Document" URL="ivi.dll">
				<Property Name="NI.PreserveRelativePath" Type="Bool">true</Property>
			</Item>
			<Item Name="kipcrle.dll" Type="Document" URL="kipcrle.dll">
				<Property Name="NI.PreserveRelativePath" Type="Bool">true</Property>
			</Item>
			<Item Name="W&amp;R(Dont Konw Size).vi" Type="VI" URL="../../Pbz/Serial Port/W&amp;R(Dont Konw Size).vi"/>
			<Item Name="W&amp;R(Know Size Compare Check WithOut Data).vi" Type="VI" URL="../../Pbz/Serial Port/W&amp;R(Know Size Compare Check WithOut Data).vi"/>
		</Item>
		<Item Name="程序生成规范" Type="Build">
			<Item Name="Pcrle" Type="EXE">
				<Property Name="App_copyErrors" Type="Bool">true</Property>
				<Property Name="App_INI_aliasGUID" Type="Str">{95178206-E5F0-4A73-B981-0B390499F26F}</Property>
				<Property Name="App_INI_GUID" Type="Str">{64611726-9717-4BA2-B86E-94B939D2AB68}</Property>
				<Property Name="App_serverConfig.httpPort" Type="Int">8002</Property>
				<Property Name="App_serverType" Type="Int">0</Property>
				<Property Name="Bld_autoIncrement" Type="Bool">true</Property>
				<Property Name="Bld_buildCacheID" Type="Str">{663FDD00-2AC7-4B5A-B1A0-85315D8E2552}</Property>
				<Property Name="Bld_buildSpecName" Type="Str">Pcrle</Property>
				<Property Name="Bld_defaultLanguage" Type="Str">ChineseS</Property>
				<Property Name="Bld_excludeInlineSubVIs" Type="Bool">true</Property>
				<Property Name="Bld_excludeLibraryItems" Type="Bool">true</Property>
				<Property Name="Bld_excludePolymorphicVIs" Type="Bool">true</Property>
				<Property Name="Bld_localDestDir" Type="Path">../builds/Pcrle</Property>
				<Property Name="Bld_localDestDirType" Type="Str">relativeToCommon</Property>
				<Property Name="Bld_modifyLibraryFile" Type="Bool">true</Property>
				<Property Name="Bld_previewCacheID" Type="Str">{CE79A13A-F421-4EE7-A37E-E4356C51E74F}</Property>
				<Property Name="Bld_version.build" Type="Int">4</Property>
				<Property Name="Bld_version.major" Type="Int">1</Property>
				<Property Name="Destination[0].destName" Type="Str">Pcrle.exe</Property>
				<Property Name="Destination[0].path" Type="Path">../builds/Pcrle/Pcrle.exe</Property>
				<Property Name="Destination[0].preserveHierarchy" Type="Bool">true</Property>
				<Property Name="Destination[0].type" Type="Str">App</Property>
				<Property Name="Destination[1].destName" Type="Str">支持目录</Property>
				<Property Name="Destination[1].path" Type="Path">../builds/Pcrle/data</Property>
				<Property Name="DestinationCount" Type="Int">2</Property>
				<Property Name="Exe_actXinfo_enumCLSID[0]" Type="Str">{3C409CA8-9168-40B1-9193-FA572F49094A}</Property>
				<Property Name="Exe_actXinfo_enumCLSID[1]" Type="Str">{3B966625-2914-4BE0-B468-59A6C0C6CCA4}</Property>
				<Property Name="Exe_actXinfo_enumCLSID[10]" Type="Str">{BFE6A3A5-7B6F-408E-BD76-39E8DA009674}</Property>
				<Property Name="Exe_actXinfo_enumCLSID[11]" Type="Str">{A447EFA2-9EC8-49C4-A187-4F5FE51D982E}</Property>
				<Property Name="Exe_actXinfo_enumCLSID[12]" Type="Str">{A11767EA-8E4F-42FC-A70F-CC054EE699C8}</Property>
				<Property Name="Exe_actXinfo_enumCLSID[13]" Type="Str">{289F94ED-2C27-45FA-94C7-EA4B6927B462}</Property>
				<Property Name="Exe_actXinfo_enumCLSID[14]" Type="Str">{F93ABB24-1BAB-401D-939F-403B4AA1AD19}</Property>
				<Property Name="Exe_actXinfo_enumCLSID[15]" Type="Str">{8B0AB768-D5B1-472F-81BC-74A8F55225CD}</Property>
				<Property Name="Exe_actXinfo_enumCLSID[16]" Type="Str">{1764FBA4-1DE1-4C52-9FFC-9CF112279069}</Property>
				<Property Name="Exe_actXinfo_enumCLSID[2]" Type="Str">{11B287E9-BCE9-42DC-AC49-8D49E8CE7A60}</Property>
				<Property Name="Exe_actXinfo_enumCLSID[3]" Type="Str">{48ECC510-0721-49D2-92EC-B28F3615C8A1}</Property>
				<Property Name="Exe_actXinfo_enumCLSID[4]" Type="Str">{11DAC921-F702-436A-B410-83FB4BD0CD05}</Property>
				<Property Name="Exe_actXinfo_enumCLSID[5]" Type="Str">{2EB4E9C3-57B6-4F0E-B06C-ACC40D64C6BA}</Property>
				<Property Name="Exe_actXinfo_enumCLSID[6]" Type="Str">{488EB3A7-B561-463B-81EE-508E3DE17252}</Property>
				<Property Name="Exe_actXinfo_enumCLSID[7]" Type="Str">{FEA89549-6BDB-4188-BBC2-E4BAE1364CD5}</Property>
				<Property Name="Exe_actXinfo_enumCLSID[8]" Type="Str">{C49FA0F9-81DC-40AF-B233-D56F20E1B876}</Property>
				<Property Name="Exe_actXinfo_enumCLSID[9]" Type="Str">{C181B68F-14A3-45F3-86B7-9E0A45E7B94E}</Property>
				<Property Name="Exe_actXinfo_enumCLSIDsCount" Type="Int">17</Property>
				<Property Name="Exe_actXinfo_majorVersion" Type="Int">5</Property>
				<Property Name="Exe_actXinfo_minorVersion" Type="Int">5</Property>
				<Property Name="Exe_actXinfo_objCLSID[0]" Type="Str">{4CCDB5FD-677C-45BE-8DA6-2F3A7A3A9AE8}</Property>
				<Property Name="Exe_actXinfo_objCLSID[1]" Type="Str">{AEE4BAF7-166F-4BF4-8642-32CCBA64EC98}</Property>
				<Property Name="Exe_actXinfo_objCLSID[10]" Type="Str">{345D32C2-8576-419D-B047-24CEE0585DED}</Property>
				<Property Name="Exe_actXinfo_objCLSID[11]" Type="Str">{84EC2A3F-A442-43D4-8FAF-B80A95B83D67}</Property>
				<Property Name="Exe_actXinfo_objCLSID[12]" Type="Str">{6FD9AE6F-1F79-449B-9215-19B3CC4FD487}</Property>
				<Property Name="Exe_actXinfo_objCLSID[13]" Type="Str">{61BD04A7-D57E-4D24-9443-6532F3B8A2F3}</Property>
				<Property Name="Exe_actXinfo_objCLSID[2]" Type="Str">{B9D62454-1C28-4E35-8AC1-F168E7A5B99A}</Property>
				<Property Name="Exe_actXinfo_objCLSID[3]" Type="Str">{6EE08864-9648-44A8-B592-7AAFDF4FE5EA}</Property>
				<Property Name="Exe_actXinfo_objCLSID[4]" Type="Str">{E443CBE2-3BB5-4BF9-845F-468938D1AC9A}</Property>
				<Property Name="Exe_actXinfo_objCLSID[5]" Type="Str">{87E2E161-31C7-40D4-9B8E-E495BC8CC262}</Property>
				<Property Name="Exe_actXinfo_objCLSID[6]" Type="Str">{CDEAE259-E75C-4179-9D9C-3E37C883EE09}</Property>
				<Property Name="Exe_actXinfo_objCLSID[7]" Type="Str">{41AB749A-F886-4AE9-9355-D14FCB21861A}</Property>
				<Property Name="Exe_actXinfo_objCLSID[8]" Type="Str">{AF9F791F-F190-47E2-9D26-8DA423CB7FF3}</Property>
				<Property Name="Exe_actXinfo_objCLSID[9]" Type="Str">{98740B6F-9B43-4C93-940A-62EBB44FCFA3}</Property>
				<Property Name="Exe_actXinfo_objCLSIDsCount" Type="Int">14</Property>
				<Property Name="Exe_actXinfo_progIDPrefix" Type="Str">Pcrle</Property>
				<Property Name="Exe_actXServerName" Type="Str">Pcrle</Property>
				<Property Name="Exe_actXServerNameGUID" Type="Str">{ACD4AE79-E715-4A4E-86F6-21437F55FB40}</Property>
				<Property Name="Source[0].itemID" Type="Str">{2FD0D57A-8AA4-4175-96EE-D1B4946CBA15}</Property>
				<Property Name="Source[0].type" Type="Str">Container</Property>
				<Property Name="Source[1].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[1].itemID" Type="Ref">/我的电脑/main.vi</Property>
				<Property Name="Source[1].sourceInclusion" Type="Str">TopLevel</Property>
				<Property Name="Source[1].type" Type="Str">VI</Property>
				<Property Name="Source[2].Container.applyInclusion" Type="Bool">true</Property>
				<Property Name="Source[2].Container.depDestIndex" Type="Int">0</Property>
				<Property Name="Source[2].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[2].itemID" Type="Ref">/我的电脑/subvi</Property>
				<Property Name="Source[2].sourceInclusion" Type="Str">Include</Property>
				<Property Name="Source[2].type" Type="Str">Container</Property>
				<Property Name="Source[3].Container.applyInclusion" Type="Bool">true</Property>
				<Property Name="Source[3].Container.depDestIndex" Type="Int">0</Property>
				<Property Name="Source[3].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[3].itemID" Type="Ref">/我的电脑/rescource</Property>
				<Property Name="Source[3].sourceInclusion" Type="Str">Include</Property>
				<Property Name="Source[3].type" Type="Str">Container</Property>
				<Property Name="Source[4].Container.applyInclusion" Type="Bool">true</Property>
				<Property Name="Source[4].Container.depDestIndex" Type="Int">0</Property>
				<Property Name="Source[4].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[4].itemID" Type="Ref">/我的电脑/Serial Port</Property>
				<Property Name="Source[4].sourceInclusion" Type="Str">Include</Property>
				<Property Name="Source[4].type" Type="Str">Container</Property>
				<Property Name="Source[5].Container.applyInclusion" Type="Bool">true</Property>
				<Property Name="Source[5].Container.depDestIndex" Type="Int">0</Property>
				<Property Name="Source[5].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[5].itemID" Type="Ref">/我的电脑/lib</Property>
				<Property Name="Source[5].sourceInclusion" Type="Str">Include</Property>
				<Property Name="Source[5].type" Type="Str">Container</Property>
				<Property Name="Source[6].Container.applyInclusion" Type="Bool">true</Property>
				<Property Name="Source[6].Container.depDestIndex" Type="Int">0</Property>
				<Property Name="Source[6].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[6].itemID" Type="Ref">/我的电脑/doc</Property>
				<Property Name="Source[6].sourceInclusion" Type="Str">Include</Property>
				<Property Name="Source[6].type" Type="Str">Container</Property>
				<Property Name="SourceCount" Type="Int">7</Property>
				<Property Name="TgtF_fileDescription" Type="Str">Pcrle</Property>
				<Property Name="TgtF_internalName" Type="Str">Pcrle</Property>
				<Property Name="TgtF_legalCopyright" Type="Str">版权 2022 </Property>
				<Property Name="TgtF_productName" Type="Str">Pcrle</Property>
				<Property Name="TgtF_targetfileGUID" Type="Str">{299E7751-72BE-4B5A-A6EC-673100BF5DEF}</Property>
				<Property Name="TgtF_targetfileName" Type="Str">Pcrle.exe</Property>
				<Property Name="TgtF_versionIndependent" Type="Bool">true</Property>
			</Item>
		</Item>
	</Item>
</Project>
