 <% if @mode == 'publish' %>


	<script type="text/javascript">
		var _gaq = _gaq || [];
		_gaq.push(['_setAccount', 'UA-40321933-1']);
		_gaq.push(['_trackPageview']);

		(function() {
		var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
		ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
		var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
		})();
	</script>




	<!-- object ga will replace _gaq in future, it is ok to include both 
		 during transition (from ga.js to analytics.js), best to use different codes -->

	<script>
		(function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
		(i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
		m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
		})(window,document,'script','//www.google-analytics.com/analytics.js','ga');

		ga('create', 'UA-40321933-2', 'blockslive.com',{'siteSpeedSampleRate': 50});

		var dimensionValue = 'NA'; // screen nickname
		if(typeof Agent !== 'undefined'){
			var _device_info = Agent.deviceInfo();
			dimensionValue = _device_info.nickName();    // device nickname
			//var id       = _device_info.deviceID();    // device unique id
		}
		ga('set', 'dimension1', dimensionValue);


		ga('send', 'pageview');
	</script>



	<!-- end session on screener[user timeout] or screener[content update] (using the new ga)  -->
	<script>
		//ga('send', 'pageview', {'sessionControl': 'end'});
	</script>


<% end %>