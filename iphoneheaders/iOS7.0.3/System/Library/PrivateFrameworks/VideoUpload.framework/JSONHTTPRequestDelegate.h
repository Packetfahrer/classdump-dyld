/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VideoUpload.framework/VideoUpload
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol JSONHTTPRequestDelegate <NSObject>
@optional
-(void)request:(id)arg1 hasWrittenBytes:(int)arg2 expectsToWrite:(int)arg3;

@required
-(void)request:(id)arg1 didFailWithError:(id)arg2;
-(void)request:(id)arg1 didReceiveObject:(id)arg2;
@end
