window.onload=function() {
var defaultText = "search";
	var searchBox = document.getElementById("edit-search-api-views-fulltext");
 
	//default text after load
	searchBox.value = defaultText;
 
	//on focus behaviour
	searchBox.onfocus = function() {
		if (this.value == defaultText) {//clear text field
			this.value = '';
		}
	}
 
	//on blur behaviour
	searchBox.onblur = function() {
		if (this.value == "") {//restore default text
			this.value = defaultText;
		}
	}
}
