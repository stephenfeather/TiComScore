# TiComscore Module

## Description

This is an Appcelerator Titanium module for iOS that wraps the ComScore iOS SDK.

## Accessing the TiComscore Module

To access this module from JavaScript, you would do the following:

	var TiComscore = require("com.featherdirect.ticomscore");

The TiComscore variable is a reference to the Module object.	

## Methods



### setCustomerC2

A method that allows the setting of the ComScore supplied CustomerC2 value. It must be called before any event tracking is fired.

```javascript
TiComscore.setCustomerC2('1000001');
```

### setPublisherSecret

A method that allows the setting of the ComScore supplied PublisherSecret used to anonymize user ids. It must be called before any event tracking is fired.

```javascript
TiComscore.setPublisherSecret('YourPublisherSecretString');
```
### setAppName

By default the module grabs the app name from the info.plist. This method can be used to override this behavior. It must be called before any event tracking is fired.

```javascript
TiComscore.setAppName('My Cool App');
```

### enableAutoUpdate

The module will push updates to the server on its own.  This method allows you to customize the interval and wether the module should track app events while your app is in the background. 

```javascript
TiComscore.enableAutoUpdate({
        interval: 125,
        foregroundOnly: 1
    });
```

### onUxActive

A method that marks the beginning of an event.

```javascript
TiComscore.onUxActive();
```

### onUxInactive

A method that marks the end of an event.

```javascript
TiComscore.onUxInactive();
```

## Support

There is none. Freely given, freely received, user beware.

## Warranty

There is none.  If you lose your job, your health, end up living in a van down by the river, I am not responsible. User beware.

## Author

Stephen Feather
@stephenfeather

## License

Copyright 2014 Feather Direct, LLC

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
