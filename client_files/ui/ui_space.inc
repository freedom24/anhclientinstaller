	<Page
		Location='1,0'
		Name='Space'
		PackSize='1,1'
		ScrollExtent='1024,768'
		Size='1024,768'
		Visible='false'
		VisualEditLock='true'
	>
		<Page
			BackgroundColor='#FFFFFF'
			Location='531,313'
			MinimumSize='370,240'
			Name='spaceGroupLaunch'
			PackLocation='nfn,fff'
			PackSize='a,a'
			ScrollExtent='370,240'
			Selectable='true'
			Size='370,240'
			UserMovable='true'
			UserResizable='true'
		>
			<Data
				buttonCancel='btnCancel'
				buttonclose='bg.mmc.close'
				buttonOk='btnOk'
				buttonReInvite='sample.btnReInvite'
				members='memberPage.members'
				Name='CodeData'
				sample='sample'
			/>
			<Checkbox
				Alignment='Right'
				Color='#96F4FC'
				Location='245,5'
				MaximumSize='16384,19'
				MinimumSize='0,19'
				Name='checkPopupHelp'
				OpacityRelativeMin='0.50'
				PackLocation='fff'
				PackSize='f,f'
				PalColor='text1'
				ScrollExtent='104,19'
				Size='104,19'
				Style='/Styles.space.Checkbox.Style'
			>@show_help</Checkbox>
			<Button
				IsCancelButton='true'
				LocalText='[@cancel]'
				Location='22,209'
				MinimumSize='0,19'
				Name='btnCancel'
				OpacityRelativeMin='0.70'
				PackLocation='nfn,fff'
				PackSize='p,f'
				ScrollExtent='125,21'
				Size='125,21'
				Style='/Styles.New.buttons.hud.style'
			>@cancel</Button>
			<Button
				LocalText='[@ok]'
				Location='228,209'
				MinimumSize='0,19'
				Name='btnOk'
				PackLocation='fff,fff'
				PackSize='p,f'
				ScrollExtent='125,21'
				Size='125,21'
				Style='/Styles.New.buttons.hud.style'
				TextColor='#000000'
			>@ok</Button>
			<Composite
				Location='0,2'
				MaximumSize='16384,22'
				MinimumSize='0,22'
				Name='sample'
				OpacityRelativeMin='1.00'
				Orientation='Horizontal'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				ScrollExtent='326,22'
				Size='326,22'
				Spacing='5'
				SpacingType='Fill'
				Visible='false'
			>
				<Text
					DropShadowDepth='1,1'
					Font='bold_12'
					LocalText='XXX NAME'
					Location='0,2'
					MaxLines='1'
					Name='name'
					PackLocation='nfn,nfn'
					PackSize='a,f'
					PalText='text1'
					ScrollExtent='146,18'
					Size='146,18'
					TextCapital='true'
					TextColor='#96F4FC'
				>xxx name</Text>
				<Image
					Color='#54E4FE'
					ContextToParent='true'
					Location='73,0'
					MaximumSize='22,22'
					MinimumSize='22,22'
					Name='declined'
					OpacityRelativeMin='0.70'
					PackLocation='fff'
					PalColor='icondefault'
					Rotation='1.00'
					ScrollExtent='22,22'
					Size='22,22'
					SourceRect='326,164,347,186'
					SourceResource='ui_rebel_icons'
					Style='/Styles.Icon.Misc.no'
					Visible='false'
				/>
				<Image
					Color='#54E4FE'
					ContextToParent='true'
					Location='151,0'
					MaximumSize='22,22'
					MinimumSize='22,22'
					Name='notInvited'
					OpacityRelativeMin='0.70'
					PackLocation='fff'
					PalColor='icondefault'
					Rotation='1.00'
					ScrollExtent='22,22'
					Size='22,22'
					SourceRect='15,16,16,17'
					SourceResource='ui_space_hud'
					Style='/Styles.Icon.Misc.notInvited'
				/>
				<Image
					Color='#54E4FE'
					ContextToParent='true'
					Location='98,0'
					MaximumSize='22,22'
					MinimumSize='22,22'
					Name='accepted'
					OpacityRelativeMin='0.70'
					PackLocation='fff'
					PalColor='icondefault'
					Rotation='1.00'
					ScrollExtent='22,22'
					Size='22,22'
					SourceRect='482,309,506,334'
					SourceResource='ui_rebel_final'
					Style='/Styles.Icon.Misc.invited'
					Visible='false'
				/>
				<Image
					Color='#54E4FE'
					ContextToParent='true'
					Location='131,0'
					MaximumSize='22,22'
					MinimumSize='22,22'
					Name='kicked'
					OpacityRelativeMin='0.70'
					PackLocation='fff'
					PalColor='icondefault'
					Rotation='1.00'
					ScrollExtent='22,22'
					Size='22,22'
					SourceRect='482,309,506,334'
					SourceResource='ui_rebel_final'
					Style='/Styles.Icon.Misc.kicked'
					Visible='false'
				/>
				<Button
					LocalText='[@ui_group_launch:invite]'
					Location='178,2'
					MaximumSize='16384,19'
					MinimumSize='0,19'
					Name='btnInvite'
					OnHide='parent.pack=t'
					OnShow='parent.pack=t'
					PackLocation='fff,nfn'
					PackSize='f,a'
					ScrollExtent='148,19'
					Size='148,19'
					slider.visible='false'
					Style='/Styles.New.buttons.hud.style'
					TextColor='#000000'
				>@ui_group_launch:invite</Button>
				<Button
					LocalText='[@ui_group_launch:kick]'
					Location='178,2'
					MaximumSize='16384,19'
					MinimumSize='0,19'
					Name='btnKick'
					OnHide='parent.pack=t'
					OnShow='parent.pack=t'
					PackLocation='fff,nfn'
					PackSize='f,a'
					ScrollExtent='148,19'
					Size='148,19'
					slider.visible='false'
					Style='/Styles.New.buttons.hud.style'
					TextColor='#000000'
					Visible='false'
				>@ui_group_launch:kick</Button>
				<Button
					LocalText='[@ui_group_launch:reinvite]'
					Location='233,2'
					MaximumSize='16384,19'
					MinimumSize='0,19'
					Name='btnReInvite'
					OnHide='parent.pack=t'
					OnShow='parent.pack=t'
					PackLocation='fff,nfn'
					PackSize='f,a'
					ScrollExtent='148,19'
					Size='148,19'
					slider.visible='false'
					Style='/Styles.New.buttons.hud.style'
					TextColor='#000000'
					Visible='false'
				>@ui_group_launch:reinvite</Button>
				<Button
					Enabled='false'
					GetsInput='false'
					LocalText='[@ui_group_launch:waiting]'
					Location='233,2'
					MaximumSize='16384,19'
					MinimumSize='0,19'
					Name='btnWaiting'
					OnHide='parent.pack=t'
					OnShow='parent.pack=t'
					PackLocation='fff,nfn'
					PackSize='f,a'
					ScrollExtent='148,19'
					Size='148,19'
					slider.visible='false'
					Style='/Styles.New.buttons.hud.style'
					TextColor='#000000'
					Visible='false'
				>@ui_group_launch:waiting</Button>
			</Composite>
			<Page
				Location='8,27'
				Name='memberPage'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				ScrollExtent='357,178'
				Selectable='true'
				Size='357,178'
			>
				<Composite
					BackgroundTint='#1CFFFF'
					Location='10,7'
					Name='members'
					PackLocation='nfn,fff'
					PackSize='a,a'
					Padding='Both'
					PalBgTint='line1'
					RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
					ScrollExtent='326,166'
					Size='326,166'
					Spacing='4'
					SpacingType='Fill'
				>
					<Composite
						Location='0,2'
						MaximumSize='16384,22'
						MinimumSize='0,22'
						Name='sample'
						OpacityRelativeMin='1.00'
						Orientation='Horizontal'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						ScrollExtent='326,22'
						Size='326,22'
						Spacing='5'
						SpacingType='Fill'
					>
						<Text
							DropShadowDepth='1,1'
							Font='bold_12'
							LocalText='XXX NAME'
							Location='0,2'
							MaxLines='1'
							Name='name'
							PackLocation='nfn,nfn'
							PackSize='a,f'
							PalText='text1'
							ScrollExtent='129,18'
							Size='129,18'
							TextCapital='true'
							TextColor='#96F4FC'
						>xxx name</Text>
						<Image
							Color='#54E4FE'
							ContextToParent='true'
							Location='134,0'
							MaximumSize='22,22'
							MinimumSize='22,22'
							Name='notInvited'
							OpacityRelativeMin='0.70'
							PackLocation='fff,nfn'
							PalColor='icondefault'
							Rotation='1.00'
							ScrollExtent='22,22'
							Size='22,22'
							SourceRect='15,16,16,17'
							SourceResource='ui_space_hud'
							Style='/Styles.Icon.Misc.notInvited'
						/>
						<Image
							Color='#54E4FE'
							ContextToParent='true'
							Location='123,0'
							MaximumSize='22,22'
							MinimumSize='22,22'
							Name='accepted'
							OpacityRelativeMin='0.70'
							PackLocation='fff,nfn'
							PalColor='icondefault'
							Rotation='1.00'
							ScrollExtent='22,22'
							Size='22,22'
							SourceRect='482,309,506,334'
							SourceResource='ui_rebel_final'
							Style='/Styles.Icon.Misc.invited'
							Visible='false'
						/>
						<Image
							Color='#54E4FE'
							ContextToParent='true'
							Location='134,0'
							MaximumSize='22,22'
							MinimumSize='22,22'
							Name='kicked'
							OpacityRelativeMin='0.70'
							PackLocation='fff,nfn'
							PalColor='icondefault'
							Rotation='1.00'
							ScrollExtent='22,22'
							Size='22,22'
							SourceRect='482,309,506,334'
							SourceResource='ui_rebel_final'
							Style='/Styles.Icon.Misc.kicked'
							Visible='false'
						/>
						<Button
							LocalText='[@ui_group_launch:invite]'
							Location='161,2'
							MaximumSize='16384,19'
							MinimumSize='141,19'
							Name='btnInvite'
							OnHide='parent.pack=t'
							OnShow='parent.pack=t'
							PackLocation='fff,nfn'
							PackSize='f,a'
							ScrollExtent='165,19'
							Size='165,19'
							slider.visible='false'
							Style='/Styles.New.buttons.hud.style'
							TextColor='#000000'
						>@ui_group_launch:invite</Button>
						<Button
							LocalText='[@ui_group_launch:kick]'
							Location='178,2'
							MaximumSize='16384,19'
							MinimumSize='0,19'
							Name='btnKick'
							OnHide='parent.pack=t'
							OnShow='parent.pack=t'
							PackLocation='fff,nfn'
							PackSize='f,a'
							ScrollExtent='148,19'
							Size='148,19'
							slider.visible='false'
							Style='/Styles.New.buttons.hud.style'
							TextColor='#000000'
							Visible='false'
						>@ui_group_launch:kick</Button>
						<Button
							LocalText='[@ui_group_launch:reinvite]'
							Location='233,2'
							MaximumSize='16384,19'
							MinimumSize='0,19'
							Name='btnReInvite'
							OnHide='parent.pack=t'
							OnShow='parent.pack=t'
							PackLocation='fff,nfn'
							PackSize='f,a'
							ScrollExtent='148,19'
							Size='148,19'
							slider.visible='false'
							Style='/Styles.New.buttons.hud.style'
							TextColor='#000000'
							Visible='false'
						>@ui_group_launch:reinvite</Button>
						<Button
							Enabled='false'
							GetsInput='false'
							LocalText='[@ui_group_launch:waiting]'
							Location='233,2'
							MaximumSize='16384,19'
							MinimumSize='0,19'
							Name='btnWaiting'
							OnHide='parent.pack=t'
							OnShow='parent.pack=t'
							PackLocation='fff,nfn'
							PackSize='f,a'
							ScrollExtent='148,19'
							Size='148,19'
							slider.visible='false'
							Style='/Styles.New.buttons.hud.style'
							TextColor='#000000'
							Visible='false'
						>@ui_group_launch:waiting</Button>
					</Composite>
					<Composite
						Location='0,28'
						MaximumSize='16384,22'
						MinimumSize='0,22'
						Name='sample'
						OpacityRelativeMin='1.00'
						Orientation='Horizontal'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						ScrollExtent='326,22'
						Size='326,22'
						Spacing='5'
						SpacingType='Fill'
					>
						<Text
							DropShadowDepth='1,1'
							Font='bold_12'
							LocalText='XXX NAME'
							Location='0,2'
							MaxLines='1'
							Name='name'
							PackLocation='nfn,nfn'
							PackSize='a,f'
							PalText='text1'
							ScrollExtent='129,18'
							Size='129,18'
							TextCapital='true'
							TextColor='#96F4FC'
						>xxx name</Text>
						<Image
							Color='#54E4FE'
							ContextToParent='true'
							Location='134,0'
							MaximumSize='22,22'
							MinimumSize='22,22'
							Name='notInvited'
							OpacityRelativeMin='0.70'
							PackLocation='fff,nfn'
							PalColor='icondefault'
							Rotation='1.00'
							ScrollExtent='22,22'
							Size='22,22'
							SourceRect='15,16,16,17'
							SourceResource='ui_space_hud'
							Style='/Styles.Icon.Misc.notInvited'
						/>
						<Image
							Color='#54E4FE'
							ContextToParent='true'
							Location='123,0'
							MaximumSize='22,22'
							MinimumSize='22,22'
							Name='accepted'
							OpacityRelativeMin='0.70'
							PackLocation='fff,nfn'
							PalColor='icondefault'
							Rotation='1.00'
							ScrollExtent='22,22'
							Size='22,22'
							SourceRect='482,309,506,334'
							SourceResource='ui_rebel_final'
							Style='/Styles.Icon.Misc.invited'
							Visible='false'
						/>
						<Image
							Color='#54E4FE'
							ContextToParent='true'
							Location='134,0'
							MaximumSize='22,22'
							MinimumSize='22,22'
							Name='kicked'
							OpacityRelativeMin='0.70'
							PackLocation='fff,nfn'
							PalColor='icondefault'
							Rotation='1.00'
							ScrollExtent='22,22'
							Size='22,22'
							SourceRect='482,309,506,334'
							SourceResource='ui_rebel_final'
							Style='/Styles.Icon.Misc.kicked'
							Visible='false'
						/>
						<Button
							LocalText='[@ui_group_launch:invite]'
							Location='161,2'
							MaximumSize='16384,19'
							MinimumSize='141,19'
							Name='btnInvite'
							OnHide='parent.pack=t'
							OnShow='parent.pack=t'
							PackLocation='fff,nfn'
							PackSize='f,a'
							ScrollExtent='165,19'
							Size='165,19'
							slider.visible='false'
							Style='/Styles.New.buttons.hud.style'
							TextColor='#000000'
						>@ui_group_launch:invite</Button>
						<Button
							LocalText='[@ui_group_launch:kick]'
							Location='178,2'
							MaximumSize='16384,19'
							MinimumSize='0,19'
							Name='btnKick'
							OnHide='parent.pack=t'
							OnShow='parent.pack=t'
							PackLocation='fff,nfn'
							PackSize='f,a'
							ScrollExtent='148,19'
							Size='148,19'
							slider.visible='false'
							Style='/Styles.New.buttons.hud.style'
							TextColor='#000000'
							Visible='false'
						>@ui_group_launch:kick</Button>
						<Button
							LocalText='[@ui_group_launch:reinvite]'
							Location='233,2'
							MaximumSize='16384,19'
							MinimumSize='0,19'
							Name='btnReInvite'
							OnHide='parent.pack=t'
							OnShow='parent.pack=t'
							PackLocation='fff,nfn'
							PackSize='f,a'
							ScrollExtent='148,19'
							Size='148,19'
							slider.visible='false'
							Style='/Styles.New.buttons.hud.style'
							TextColor='#000000'
							Visible='false'
						>@ui_group_launch:reinvite</Button>
						<Button
							Enabled='false'
							GetsInput='false'
							LocalText='[@ui_group_launch:waiting]'
							Location='233,2'
							MaximumSize='16384,19'
							MinimumSize='0,19'
							Name='btnWaiting'
							OnHide='parent.pack=t'
							OnShow='parent.pack=t'
							PackLocation='fff,nfn'
							PackSize='f,a'
							ScrollExtent='148,19'
							Size='148,19'
							slider.visible='false'
							Style='/Styles.New.buttons.hud.style'
							TextColor='#000000'
							Visible='false'
						>@ui_group_launch:waiting</Button>
					</Composite>
					<Composite
						Location='0,54'
						MaximumSize='16384,22'
						MinimumSize='0,22'
						Name='sample'
						OpacityRelativeMin='1.00'
						Orientation='Horizontal'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						ScrollExtent='326,22'
						Size='326,22'
						Spacing='5'
						SpacingType='Fill'
					>
						<Text
							DropShadowDepth='1,1'
							Font='bold_12'
							LocalText='XXX NAME'
							Location='0,2'
							MaxLines='1'
							Name='name'
							PackLocation='nfn,nfn'
							PackSize='a,f'
							PalText='text1'
							ScrollExtent='129,18'
							Size='129,18'
							TextCapital='true'
							TextColor='#96F4FC'
						>xxx name</Text>
						<Image
							Color='#54E4FE'
							ContextToParent='true'
							Location='134,0'
							MaximumSize='22,22'
							MinimumSize='22,22'
							Name='notInvited'
							OpacityRelativeMin='0.70'
							PackLocation='fff,nfn'
							PalColor='icondefault'
							Rotation='1.00'
							ScrollExtent='22,22'
							Size='22,22'
							SourceRect='15,16,16,17'
							SourceResource='ui_space_hud'
							Style='/Styles.Icon.Misc.notInvited'
						/>
						<Image
							Color='#54E4FE'
							ContextToParent='true'
							Location='123,0'
							MaximumSize='22,22'
							MinimumSize='22,22'
							Name='accepted'
							OpacityRelativeMin='0.70'
							PackLocation='fff,nfn'
							PalColor='icondefault'
							Rotation='1.00'
							ScrollExtent='22,22'
							Size='22,22'
							SourceRect='482,309,506,334'
							SourceResource='ui_rebel_final'
							Style='/Styles.Icon.Misc.invited'
							Visible='false'
						/>
						<Image
							Color='#54E4FE'
							ContextToParent='true'
							Location='134,0'
							MaximumSize='22,22'
							MinimumSize='22,22'
							Name='kicked'
							OpacityRelativeMin='0.70'
							PackLocation='fff,nfn'
							PalColor='icondefault'
							Rotation='1.00'
							ScrollExtent='22,22'
							Size='22,22'
							SourceRect='482,309,506,334'
							SourceResource='ui_rebel_final'
							Style='/Styles.Icon.Misc.kicked'
							Visible='false'
						/>
						<Button
							LocalText='[@ui_group_launch:invite]'
							Location='161,2'
							MaximumSize='16384,19'
							MinimumSize='141,19'
							Name='btnInvite'
							OnHide='parent.pack=t'
							OnShow='parent.pack=t'
							PackLocation='fff,nfn'
							PackSize='f,a'
							ScrollExtent='165,19'
							Size='165,19'
							slider.visible='false'
							Style='/Styles.New.buttons.hud.style'
							TextColor='#000000'
						>@ui_group_launch:invite</Button>
						<Button
							LocalText='[@ui_group_launch:kick]'
							Location='178,2'
							MaximumSize='16384,19'
							MinimumSize='0,19'
							Name='btnKick'
							OnHide='parent.pack=t'
							OnShow='parent.pack=t'
							PackLocation='fff,nfn'
							PackSize='f,a'
							ScrollExtent='148,19'
							Size='148,19'
							slider.visible='false'
							Style='/Styles.New.buttons.hud.style'
							TextColor='#000000'
							Visible='false'
						>@ui_group_launch:kick</Button>
						<Button
							LocalText='[@ui_group_launch:reinvite]'
							Location='233,2'
							MaximumSize='16384,19'
							MinimumSize='0,19'
							Name='btnReInvite'
							OnHide='parent.pack=t'
							OnShow='parent.pack=t'
							PackLocation='fff,nfn'
							PackSize='f,a'
							ScrollExtent='148,19'
							Size='148,19'
							slider.visible='false'
							Style='/Styles.New.buttons.hud.style'
							TextColor='#000000'
							Visible='false'
						>@ui_group_launch:reinvite</Button>
						<Button
							Enabled='false'
							GetsInput='false'
							LocalText='[@ui_group_launch:waiting]'
							Location='233,2'
							MaximumSize='16384,19'
							MinimumSize='0,19'
							Name='btnWaiting'
							OnHide='parent.pack=t'
							OnShow='parent.pack=t'
							PackLocation='fff,nfn'
							PackSize='f,a'
							ScrollExtent='148,19'
							Size='148,19'
							slider.visible='false'
							Style='/Styles.New.buttons.hud.style'
							TextColor='#000000'
							Visible='false'
						>@ui_group_launch:waiting</Button>
					</Composite>
					<Composite
						Location='0,80'
						MaximumSize='16384,22'
						MinimumSize='0,22'
						Name='sample'
						OpacityRelativeMin='1.00'
						Orientation='Horizontal'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						ScrollExtent='326,22'
						Size='326,22'
						Spacing='5'
						SpacingType='Fill'
					>
						<Text
							DropShadowDepth='1,1'
							Font='bold_12'
							LocalText='XXX NAME'
							Location='0,2'
							MaxLines='1'
							Name='name'
							PackLocation='nfn,nfn'
							PackSize='a,f'
							PalText='text1'
							ScrollExtent='129,18'
							Size='129,18'
							TextCapital='true'
							TextColor='#96F4FC'
						>xxx name</Text>
						<Image
							Color='#54E4FE'
							ContextToParent='true'
							Location='134,0'
							MaximumSize='22,22'
							MinimumSize='22,22'
							Name='notInvited'
							OpacityRelativeMin='0.70'
							PackLocation='fff,nfn'
							PalColor='icondefault'
							Rotation='1.00'
							ScrollExtent='22,22'
							Size='22,22'
							SourceRect='15,16,16,17'
							SourceResource='ui_space_hud'
							Style='/Styles.Icon.Misc.notInvited'
						/>
						<Image
							Color='#54E4FE'
							ContextToParent='true'
							Location='123,0'
							MaximumSize='22,22'
							MinimumSize='22,22'
							Name='accepted'
							OpacityRelativeMin='0.70'
							PackLocation='fff,nfn'
							PalColor='icondefault'
							Rotation='1.00'
							ScrollExtent='22,22'
							Size='22,22'
							SourceRect='482,309,506,334'
							SourceResource='ui_rebel_final'
							Style='/Styles.Icon.Misc.invited'
							Visible='false'
						/>
						<Image
							Color='#54E4FE'
							ContextToParent='true'
							Location='134,0'
							MaximumSize='22,22'
							MinimumSize='22,22'
							Name='kicked'
							OpacityRelativeMin='0.70'
							PackLocation='fff,nfn'
							PalColor='icondefault'
							Rotation='1.00'
							ScrollExtent='22,22'
							Size='22,22'
							SourceRect='482,309,506,334'
							SourceResource='ui_rebel_final'
							Style='/Styles.Icon.Misc.kicked'
							Visible='false'
						/>
						<Button
							LocalText='[@ui_group_launch:invite]'
							Location='161,2'
							MaximumSize='16384,19'
							MinimumSize='141,19'
							Name='btnInvite'
							OnHide='parent.pack=t'
							OnShow='parent.pack=t'
							PackLocation='fff,nfn'
							PackSize='f,a'
							ScrollExtent='165,19'
							Size='165,19'
							slider.visible='false'
							Style='/Styles.New.buttons.hud.style'
							TextColor='#000000'
						>@ui_group_launch:invite</Button>
						<Button
							LocalText='[@ui_group_launch:kick]'
							Location='178,2'
							MaximumSize='16384,19'
							MinimumSize='0,19'
							Name='btnKick'
							OnHide='parent.pack=t'
							OnShow='parent.pack=t'
							PackLocation='fff,nfn'
							PackSize='f,a'
							ScrollExtent='148,19'
							Size='148,19'
							slider.visible='false'
							Style='/Styles.New.buttons.hud.style'
							TextColor='#000000'
							Visible='false'
						>@ui_group_launch:kick</Button>
						<Button
							LocalText='[@ui_group_launch:reinvite]'
							Location='233,2'
							MaximumSize='16384,19'
							MinimumSize='0,19'
							Name='btnReInvite'
							OnHide='parent.pack=t'
							OnShow='parent.pack=t'
							PackLocation='fff,nfn'
							PackSize='f,a'
							ScrollExtent='148,19'
							Size='148,19'
							slider.visible='false'
							Style='/Styles.New.buttons.hud.style'
							TextColor='#000000'
							Visible='false'
						>@ui_group_launch:reinvite</Button>
						<Button
							Enabled='false'
							GetsInput='false'
							LocalText='[@ui_group_launch:waiting]'
							Location='233,2'
							MaximumSize='16384,19'
							MinimumSize='0,19'
							Name='btnWaiting'
							OnHide='parent.pack=t'
							OnShow='parent.pack=t'
							PackLocation='fff,nfn'
							PackSize='f,a'
							ScrollExtent='148,19'
							Size='148,19'
							slider.visible='false'
							Style='/Styles.New.buttons.hud.style'
							TextColor='#000000'
							Visible='false'
						>@ui_group_launch:waiting</Button>
					</Composite>
				</Composite>
				<Scrollbar
					Control='members'
					Enabled='false'
					Location='341,6'
					Name='scroll'
					PackLocation='fff,fff'
					PackSize='f,a'
					ScrollExtent='11,164'
					Size='11,164'
					Style='/Styles.scrollbar.default.vHud4.style'
				>
				</Scrollbar>
				<Page
					BackgroundColor='#FFFFFF'
					BackgroundOpacity='1.00'
					BackgroundTint='#1CFFFF'
					Name='outline'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					PalBgTint='line1'
					RStyleDefault='/Styles.New.whiteOutline.rs_default'
					ScrollExtent='357,178'
					Size='357,178'
				/>
				<Page
					BackgroundColor='#FFFFFF'
					BackgroundOpacity='0.60'
					BackgroundTint='#00D6FB'
					Location='1,2'
					Name='inFrame'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					PalBgTint='back1'
					RStyleDefault='/Styles.New.fatFrameInside_palW.rs_default'
					ScrollExtent='355,175'
					Size='355,175'
				/>
			</Page>
			<Page
				Name='bg'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				ScrollExtent='370,240'
				Size='370,240'
			>
				<Page
					Location='358,8'
					Name='mmc'
					PackLocation='fff,nfn'
					PackSize='f,f'
					RStyleDefault='/Styles.New.thin_mmc.rs_default'
					ScrollExtent='12,10'
					Size='12,10'
				>
					<Button
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='0.80'
						IsCancelButton='true'
						Location='-3,-3'
						Name='close'
						PackLocation='fff,cfc'
						PackSize='f,f'
						ScrollExtent='16,16'
						Size='16,16'
						Style='/Styles.Frame.buttonClose.style'
					></Button>
				</Page>
				<Page
					MinimumSize='0,19'
					Name='caption'
					PackLocation='nfn,nfn'
					PackSize='a,f'
					ScrollExtent='223,19'
					Size='223,19'
				>
					<Text
						Enabled='false'
						Font='bold_12'
						LocalText='LAUNCH GROUP'
						Margin='6,-2,0,0'
						MaxLines='1'
						MinimumSize='0,19'
						Name='labelTitle'
						PackSize='a,f'
						PalText='titletext'
						ScrollExtent='223,19'
						Size='223,19'
						TextAlignmentVertical='Center'
						TextCapital='true'
						TextColor='#00354F'
					>Launch Group</Text>
				</Page>
				<Page
					BackgroundTint='#00D6FB'
					GetsInput='false'
					Name='frame'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					PalBgTint='baselight'
					RStyleDefault='/Styles.New.thin_in.rs_default'
					ScrollExtent='370,240'
					Selectable='true'
					Size='370,240'
				>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Name='lines'
						PackSize='a,a'
						RStyleDefault='/Styles.space.boxes.generic4.rs_default'
						ScrollExtent='370,240'
						Size='370,240'
					>
						<Page
							BackgroundColor='#FFFFFF'
							GetsInput='false'
							Location='0,218'
							Name='outlineBL'
							OpacityRelativeMin='0.80'
							PackLocation='nfn,fff'
							PackSize='p,f'
							ScrollExtent='288,22'
							Size='288,22'
						>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#1CFFFF'
								GetsInput='false'
								Location='0,13'
								Name='outline1'
								OpacityRelativeMin='0.80'
								PackSize='a,a'
								PalBgTint='line1'
								RStyleDefault='/Styles.space.boxes.boxlinebottomLeft2.rs_default'
								ScrollExtent='288,9'
								Size='288,9'
							/>
						</Page>
						<Page
							BackgroundColor='#FFFFFF'
							GetsInput='false'
							Location='104,218'
							Name='outlineBR'
							OpacityRelativeMin='0.80'
							PackLocation='fff,fff'
							PackSize='p,f'
							RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
							ScrollExtent='266,22'
							Size='266,22'
						>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#1CFFFF'
								GetsInput='false'
								Location='0,13'
								Name='outline1'
								OpacityRelativeMin='0.80'
								PackSize='a,a'
								PalBgTint='line1'
								RStyleDefault='/Styles.space.boxes.boxlinebottomRight2.rs_default'
								ScrollExtent='266,9'
								Size='266,9'
							/>
						</Page>
						<Page
							BackgroundColor='#FFFFFF'
							GetsInput='false'
							Location='104,0'
							Name='outlineTR'
							OpacityRelativeMin='0.80'
							PackLocation='fff,nfn'
							PackSize='p,f'
							ScrollExtent='266,22'
							Size='266,22'
						>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#1CFFFF'
								GetsInput='false'
								Name='outline1'
								OpacityRelativeMin='0.80'
								PackSize='a,a'
								PalBgTint='line1'
								RStyleDefault='/Styles.space.boxes.boxlineTopRight2.rs_default'
								ScrollExtent='266,9'
								Size='266,9'
							/>
						</Page>
						<Page
							BackgroundColor='#FFFFFF'
							GetsInput='false'
							Name='outlineTL'
							OpacityRelativeMin='0.80'
							PackLocation='nfn,nfn'
							PackSize='p,f'
							RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
							ScrollExtent='288,22'
							Size='288,22'
						>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#1CFFFF'
								GetsInput='false'
								Name='outline1'
								OpacityRelativeMin='0.80'
								PackSize='a,a'
								PalBgTint='line1'
								RStyleDefault='/Styles.space.boxes.boxlineTopLeft2.rs_default'
								ScrollExtent='288,9'
								Size='288,9'
							/>
						</Page>
					</Page>
					<Page
						BackgroundOpacity='1.00'
						Location='-1,0'
						Name='top'
						PackLocation='nfn,nfn'
						PackSize='a,f'
						RStyleDefault='/Styles.New.main_TR.rs_default'
						ScrollExtent='371,29'
						Size='371,29'
					/>
					<Page
						BackgroundOpacity='1.00'
						Location='0,217'
						Name='bottom'
						PackLocation='nfn,fff'
						PackSize='a,f'
						RStyleDefault='/Styles.New.main_BR.rs_default'
						ScrollExtent='370,23'
						Size='370,23'
					/>
				</Page>
				<Page
					BackgroundOpacity='1.00'
					BackgroundTint='#00D6FB'
					GetsInput='false'
					Location='1,5'
					Name='back'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					PalBgTint='back1'
					RStyleDefault='/Styles.New.thin_in.rs_default'
					ScrollExtent='369,232'
					Selectable='true'
					Size='369,232'
				/>
				<Page
					BackgroundOpacity='1.00'
					BackgroundTint='#00D6FB'
					GetsInput='false'
					Location='1,0'
					Name='back'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					PalBgTint='back1'
					RStyleDefault='/Styles.space.spaceglow.rs_default'
					ScrollExtent='369,240'
					Selectable='true'
					Size='369,240'
				/>
			</Page>
		</Page>
		<include>ui_space_shipcomponent.inc</include>
		<include>ui_space_shipchoose.inc</include>
		<include>ui_space_shipview.inc</include>
		<include>ui_space_status.inc</include>
		<include>ui_space_zonemap.inc</include>
		<include>ui_space_formation.inc</include>
		<include>ui_space_hyperspacemap.inc</include>
		<include>ui_space_componentdetail.inc</include>
		<include>ui_space_convo.inc</include>
		<include>ui_space_weaponggroupassignment.inc</include>
	</Page>