/*!
 * first things first
 **/
window.onload = function init()
{
	Enabler.isInitialized() ? initAd() : Enabler.addEventListener(studio.events.StudioEvent.INIT, initAd);
	//EB.isInitialized() ? initAd() : EB.addEventListener(EBG.EventName.EB_INITIALIZED, initAd);
	//initAd();
}

/*!
 * init the ad
 **/
function initAd()
{
	loop = 3;
	
    content = document.getElementById('content');
	searchbar = document.getElementById('searchbar');
	logoCover = document.getElementById('logoCover');
	mikeCover = document.getElementById('mikeCover');
	query = document.getElementById('query');
	bar2 = document.getElementById('bar2');
	g = document.getElementById('g');
	g0 = document.getElementById('g0');
	g1 = document.getElementById('g1');
	g2 = document.getElementById('g2');
	g3 = document.getElementById('g3');
	copy = document.getElementById('copy');
	cta = document.getElementById('cta');
	exit = document.getElementById('exit');
	
	exit.addEventListener('click', exitClick, false);
	
	resetAd();
	
	// Polite loading
	Enabler.isVisible() ? startAd() : Enabler.addEventListener(studio.events.StudioEvent.VISIBLE, startAd);
	//setTimeout(startAd, 300);  // not so polite
}

/*!
 * reset the ad
 **/
function resetAd()
{
	TweenMax.to(content, 0, {scale:.5, transformOrigin:'top left'});	// halfsize
	TweenMax.to(searchbar, 0, {x:0, y:0, scale:1});
	initSearchBar();
	TweenMax.to(logoCover, 0, {opacity:0});
	TweenMax.to(mikeCover, 0, {opacity:0});
	TweenMax.to(copy, 0, {opacity:0, x:704-20, y:0});
	TweenMax.to(cta, 0, {opacity:0, x:1122, y:62});
}

/*!
 * init the searchbar
 **/
function initSearchBar()
{
	text = "atm near me".split("");
	query.innerHTML = "";
	
	TweenMax.to(bar2, 0, {opacity:0, x:400, y:-8, scaleX:2.6, scaleY:2});
	TweenMax.to(g, 0, {x:62, y:48});
	TweenMax.to(g0, 0, {opacity:0, rotation:-30});
	TweenMax.to(g1, 0, {opacity:0, rotation:-30});
	TweenMax.to(g2, 0, {opacity:0, rotation:-30});
	TweenMax.to(g3, 0, {opacity:0});
	TweenMax.to(query, 0, {x:192, y:60});
}

/*!
 * start the ad
 **/
function startAd()
{
	var loading = document.getElementById("loading");
	var content = document.getElementById("content");
	
	loading.parentNode.removeChild(loading);
	content.style.display = 'block';
	
	playAd();
}

/*!
 * play the ad
 **/
function playAd()
{
	var sec = 1;
	var ease = Sine.easeOut;
	var del = 0;
	// F1
	//TweenMax.to(searchbar, .25, {opacity:1, y:0, ease:ease, delay:del+=.5});
	TweenMax.to(logoCover, .1, {opacity:1, delay:del+=1});
	TweenMax.delayedCall(del+=.25, playG);
	TweenMax.delayedCall(del+=.45, typeQuery);
	TweenMax.to(mikeCover, .1, {opacity:1, delay:del});
	// EF
	sec = .5;
	TweenMax.to(bar2, sec, {opacity:1, x:260, scaleX:2, delay:del+=2.5});
	TweenMax.to(searchbar, sec, {x:32, y:48, scale:.5, delay:del});
	TweenMax.to(copy, .7, {opacity:1, delay:del+=.6});
	TweenMax.to(cta, .7, {opacity:1, delay:del+=.8});
	
	TweenMax.delayedCall(del+=3.5, loopAd);
}

/*!
 * play the G
 **/
function playG()
{
	var sec = .14;
	var del = 0;
	var ivl = .06;
	
	TweenMax.to(g3, 0, {opacity:1, delay:del});
	TweenMax.to(g2, 0, {opacity:1, delay:del+=ivl});
	TweenMax.to(g2, sec, {rotation:0, delay:del});
	TweenMax.to(g1, 0, {opacity:1, delay:del+=ivl});
	TweenMax.to(g1, sec, {rotation:0, delay:del});
	TweenMax.to(g0, 0, {opacity:1, delay:del+=ivl});
	TweenMax.to(g0, sec, {rotation:0, delay:del});
}

/*!
 * type it
 **/
function typeQuery()
{
	if (text.length>0)
	{
		query.innerHTML += text.shift();
		TweenMax.delayedCall(.04, typeQuery);
	}
}

/*!
 * loop the ad
 **/
function loopAd()
{
	if (--loop > 0)
	{
		resetAd();
		playAd();
	}
}

/*!
 * exit the click
 **/
function exitClick(e) 
{
	//Enabler.exitOverride("BackgroundExit", myURL);
    Enabler.exit('BackgroundExit');
	//EB.clickthrough();
	//window.open(window.clickTag);
}