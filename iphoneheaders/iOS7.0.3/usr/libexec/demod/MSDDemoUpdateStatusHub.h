/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/demod
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <demod/MSDDemoUpdateStatusDelegate.h>

@class NSMutableSet;

@interface MSDDemoUpdateStatusHub : NSObject <MSDDemoUpdateStatusDelegate> {

	NSMutableSet* _delegates;

}

@property (retain) NSMutableSet * delegates;              //@synthesize delegates=_delegates - In the implementation block
+(id)sharedInstance;
-(BOOL)registerDemoUpdateStatusDelegate:(id)arg1 ;
-(void)demoUpdateCompleted:(id)arg1 ;
-(void)unregisterDemoUpdateStatusDelegate:(id)arg1 ;
-(void)demoUpdateFailed:(id)arg1 ;
-(void)demoUpdateProgress:(id)arg1 ;
-(void)setDelegates:(id)arg1 ;
-(id)delegates;
-(void).cxx_destruct;
@end
