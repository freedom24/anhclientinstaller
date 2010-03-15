		<Page
			BackgroundOpacity='1.00'
			BackgroundTint='#00D6FB'
			Location='897,588'
			MaximumSize='16384,64'
			MinimumSize='140,64'
			Name='netStatus'
			PackLocation='fff,fff'
			PalBgTint='back1'
			RStyleDefault='/Styles.New.tool.tool_TL_in.rs_default'
			ScrollExtent='140,64'
			Size='140,64'
			UserMovable='true'
			UserResizable='true'
			VisualEditLock='true'
		>
			<Data
				Name='CodeData'
				textBandwidth='comp.bandwidth.text'
				textFps='comp.fps.text'
				textPacketLoss='comp.packetLoss.text'
				textPing='comp.ping.text'
			/>
			<Composite
				Location='1,2'
				Name='comp'
				PackSize='a,a'
				ScrollExtent='136,60'
				Size='136,59'
				SpacingType='Constant'
			>
				<Page
					Name='ping'
					PackSize='a,a'
					ScrollExtent='136,15'
					Size='136,15'
				>
					<Text
						Font='bold_12'
						LocalText='ping (ms):'
						MaxLines='1'
						Name='label'
						PackSize='f,a'
						PalText='text1'
						ScrollExtent='73,15'
						Size='73,15'
						TextAlignment='Right'
						TextAlignmentVertical='Center'
						TextColor='#96F4FC'
					>ping (ms):</Text>
					<Text
						Font='bold_13'
						LocalText='35000'
						Location='74,0'
						MaxLines='1'
						Name='text'
						PackLocation='fff'
						PackSize='a,a'
						PalText='text1'
						ScrollExtent='62,15'
						Size='62,15'
						TextAlignmentVertical='Center'
						TextColor='#96F4FC'
					>35000</Text>
				</Page>
				<Page
					Location='0,15'
					Name='packetLoss'
					PackSize='a,a'
					ScrollExtent='136,15'
					Size='136,15'
				>
					<Text
						Font='bold_12'
						LocalText='packet loss:'
						MaxLines='1'
						Name='label'
						PackSize='f,a'
						PalText='text1'
						ScrollExtent='73,15'
						Size='73,15'
						TextAlignment='Right'
						TextAlignmentVertical='Center'
						TextColor='#96F4FC'
					>packet loss:</Text>
					<Text
						Font='bold_13'
						LocalText='88%'
						Location='74,0'
						MaxLines='1'
						Name='text'
						PackLocation='fff'
						PackSize='a,a'
						PalText='text1'
						ScrollExtent='62,15'
						Size='62,15'
						TextAlignmentVertical='Center'
						TextColor='#96F4FC'
					>88%</Text>
				</Page>
				<Page
					Location='0,30'
					Name='bandwidth'
					PackSize='a,a'
					ScrollExtent='136,15'
					Size='136,15'
				>
					<Text
						Font='bold_12'
						LocalText='bandwidth in:'
						MaxLines='1'
						Name='label'
						PackSize='f,a'
						PalText='text1'
						ScrollExtent='73,15'
						Size='73,15'
						TextAlignment='Right'
						TextAlignmentVertical='Center'
						TextColor='#96F4FC'
					>bandwidth in:</Text>
					<Text
						Font='bold_13'
						LocalText='0.0/0.0'
						Location='74,0'
						MaxLines='1'
						Name='text'
						PackLocation='fff'
						PackSize='a,a'
						PalText='text1'
						ScrollExtent='62,15'
						Size='62,15'
						TextAlignmentVertical='Center'
						TextColor='#96F4FC'
					>0.0/0.0</Text>
				</Page>
				<Page
					Location='0,45'
					Name='fps'
					PackSize='a,a'
					ScrollExtent='136,15'
					Size='136,15'
				>
					<Text
						Font='bold_12'
						LocalText='fps:'
						MaxLines='1'
						Name='label'
						PackSize='f,a'
						PalText='text1'
						ScrollExtent='73,15'
						Size='73,15'
						TextAlignment='Right'
						TextAlignmentVertical='Center'
						TextColor='#96F4FC'
					>fps:</Text>
					<Text
						Font='bold_13'
						LocalText='500'
						Location='74,0'
						MaxLines='1'
						Name='text'
						PackLocation='fff'
						PackSize='a,a'
						PalText='text1'
						ScrollExtent='62,15'
						Size='62,15'
						TextAlignmentVertical='Center'
						TextColor='#96F4FC'
					>500</Text>
				</Page>
			</Composite>
		</Page>