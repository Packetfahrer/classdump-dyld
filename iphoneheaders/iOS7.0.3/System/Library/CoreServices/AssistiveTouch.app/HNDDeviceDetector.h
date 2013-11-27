/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:41:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol HNDDeviceDetectorDelegate;
#import <assistivetouchd/assistivetouchd-Structs.h>
@class ;

@interface HNDDeviceDetector : NSObject {

	IOHIDManagerRef _hidManager;
	<HNDDeviceDetectorDelegate>* _delegate;
	BOOL _detectDevices;

}

@property (assign,nonatomic) BOOL detectDevices;                                  //@synthesize detectDevices=_detectDevices - In the implementation block
@property (assign,nonatomic) <HNDDeviceDetectorDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)initialize;
+(id)sharedDetector;
-(void)setDetectDevices:(BOOL)arg1 ;
-(BOOL)detectDevices;
-(id)_matchingDictionaries;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
@end
