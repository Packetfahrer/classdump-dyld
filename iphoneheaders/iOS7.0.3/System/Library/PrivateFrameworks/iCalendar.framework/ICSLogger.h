/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol ICSLoggingDelegate;
@interface ICSLogger : NSObject {

	int _logCount;
	<ICSLoggingDelegate>* _loggingDelegate;

}
+(void)setDelegate:(id)arg1 ;
+(id)sharedInstance;
+(void)logAtLevel:(int)arg1 forTokenizer:(id)arg2 message:(id)arg3 ;
-(void)setDelegate:(id)arg1 ;
-(void)logAtLevel:(int)arg1 forTokenizer:(id)arg2 format:(id)arg3 args:(void*)arg4 ;
@end
