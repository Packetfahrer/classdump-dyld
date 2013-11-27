/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>
#import <SAObjects/SADeferredKeyObject.h>

@class NSNumber, NSString;

@interface SAAceView : AceObject <SAAceSerializable, SADeferredKeyObject>

@property (nonatomic,copy) NSNumber * listenAfterSpeaking; 
@property (nonatomic,copy) NSString * speakableText; 
@property (nonatomic,copy) NSString * viewId; 
+(id)aceView;
+(id)aceViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(id)deferredKeys;
-(id)listenAfterSpeaking;
-(void)setListenAfterSpeaking:(id)arg1 ;
-(id)speakableText;
-(void)setSpeakableText:(id)arg1 ;
-(id)viewId;
-(void)setViewId:(id)arg1 ;
@end
