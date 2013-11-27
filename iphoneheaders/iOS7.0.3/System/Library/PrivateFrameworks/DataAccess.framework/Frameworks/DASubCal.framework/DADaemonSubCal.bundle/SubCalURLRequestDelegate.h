/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DADaemonSubCal.bundle/DADaemonSubCal
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SubCalURLRequestDelegate <NSObject>
@optional
-(void)subCalURLRequest:(id)arg1 updatedData:(id)arg2;
-(void)subCalURLRequestNeedsUsernameAndPasswordForHost:(id)arg1 continuation:(/*^block*/ id)arg2;
-(void)subCalURLRequest:(id)arg1 didRedirectToURL:(id)arg2;

@required
-(void)handleTrustChallenge:(id)arg1 forSubCalURLRequest:(id)arg2;
-(void)subCalURLRequest:(id)arg1 finishedWithData:(id)arg2 error:(id)arg3;
@end
