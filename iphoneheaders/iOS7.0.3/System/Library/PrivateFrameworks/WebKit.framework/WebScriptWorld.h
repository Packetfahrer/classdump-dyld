/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <WebKit/WebKit-Structs.h>
@class WebScriptWorldPrivate;

@interface WebScriptWorld : NSObject {

	WebScriptWorldPrivate* _private;

}
+(id)standardWorld;
+(id)world;
+(id)findOrCreateWorld:(DOMWrapperWorld*)arg1 ;
+(id)scriptWorldForGlobalContext:(OpaqueJSContextRef)arg1 ;
+(id)scriptWorldForJavaScriptContext:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithWorld:(PassRefPtr<WebCore::DOMWrapperWorld>*)arg1 ;
-(void)unregisterWorld;
@end
