/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:55:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/sbin/BTServer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface AppInfo : NSObject {

	BOOL _isApp;
	int _pid;

}

@property (assign,nonatomic) int pid;                 //@synthesize pid=_pid - In the implementation block
@property (assign,nonatomic) BOOL isApp;              //@synthesize isApp=_isApp - In the implementation block
+(id)appInfoWithPID:(int)arg1 isApp:(BOOL)arg2 ;
-(void)setIsApp:(BOOL)arg1 ;
-(id)initWithPID:(int)arg1 isApp:(BOOL)arg2 ;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(BOOL)isApp;
@end
