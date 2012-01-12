//
//  PGExternalScreen.h
//  MultiScreenPlugin
//
//  Created by Andrew Trice on 1/9/12.
//  Copyright 2012 Adobe Systems. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <PhoneGap/PGPlugin.h>


@interface PGExternalScreen : PGPlugin {
    
    NSString* callbackID; 
	UIWindow* externalWindow;
	UIScreen* externalScreen;
    UIWebView* webView;
    NSString *baseURLAddress;
    NSURL *baseURL;
}

@property (nonatomic, copy) NSString* callbackID;

//Public Instance Method (visible in phonegap API)
- (void) setupScreenConnectionNotificationHandlers:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options ;
- (void) loadHTMLResource:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;
- (void) loadHTML:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;
- (void) invokeJavaScript:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;
- (void) checkExternalScreenAvailable:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;


//Instance Method  
- (void) attemptSecondScreenView;
- (void) handleScreenConnectNotification:(NSNotification*)aNotification;
- (void) handleScreenDisconnectNotification:(NSNotification*)aNotification;
@end
