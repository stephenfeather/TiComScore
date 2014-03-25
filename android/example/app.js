// This is a test harness for your module
// You should do something interesting in this harness 
// to test out the module and to provide instructions 
// to users on how to use it by example.



var TiComscore = require('com.featherdirect.ticomscore');
Ti.API.info("module is => " + TiComscore);

// open a single window
var win = Ti.UI.createWindow({
    backgroundColor: 'white',
    layout: 'vertical'
});

var header = Ti.UI.createView({
    backgroundColor: "#ababab",
    height: 64,
    width: Ti.UI.FILL
});
var label = Ti.UI.createLabel({
    color: "#ffffff",
    text: "TiComscore",
    bottom: "10%"
});
header.add(label);

var setCustomerC2 = Ti.UI.createButton({
    top: 10,
    title: 'Set CustomerC2'
});

setCustomerC2.addEventListener('click', function(e) {
    TiComscore.setCustomerC2('1000001');
});

var setPublisherSecret = Ti.UI.createButton({
    top: 10,
    title: 'Set PublisherSecret'
});

setPublisherSecret.addEventListener('click', function(e) {
    TiComscore.setPublisherSecret('YourPublisherSecretString');
});

var setAppName = Ti.UI.createButton({
    top: 10,
    title: 'Set AppName'
});

setAppName.addEventListener('click', function(e) {
    TiComscore.setAppName('My Cool App');
});

var enableAutoUpdate = Ti.UI.createButton({
    top: 10,
    title: 'Enable Auto Update'
});

enableAutoUpdate.addEventListener('click', function(e) {
    TiComscore.enableAutoUpdate({
        interval: 125,
        foregroundOnly: true
    });
});


var onUxActive = Ti.UI.createButton({
    top: 10,
    title: 'Set onUxActive'
});

onUxActive.addEventListener('click', function(e) {
    TiComscore.onUxActive();
    onUxActive.enabled = false;
    onUxInactive.enabled = true;
});

var onUxInactive = Ti.UI.createButton({
    top: 10,
    title: 'Set onUxInactive',
    enabled: false
});

onUxInactive.addEventListener('click', function(e) {
    TiComscore.onUxInactive();
    onUxInactive.enabled = false;
    onUxActive.enabled = true;
});

win.add(header);
win.add(setCustomerC2);
win.add(setPublisherSecret);
win.add(setAppName);
win.add(enableAutoUpdate);
win.add(onUxActive);
win.add(onUxInactive);
win.open();