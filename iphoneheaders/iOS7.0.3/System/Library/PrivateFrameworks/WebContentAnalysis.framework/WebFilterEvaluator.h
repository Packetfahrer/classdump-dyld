/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSURL, NSString, NSMutableData;

@interface WebFilterEvaluator : NSObject {

	unsigned _filterState;
	NSURL* _url;
	NSString* _pageTitle;
	NSMutableData* _buffer;

}
+(id)createWithResponse:(id)arg1 ;
+(BOOL)isManagedSession;
-(void)dealloc;
-(id)initWithResponse:(id)arg1 ;
-(id)addData:(id)arg1 ;
-(id)debugPageForPageWithData:(id)arg1 forURL:(id)arg2 debugString:(id)arg3 ;
-(id)blockPageForPageWithTitle:(id)arg1 origURL:(id)arg2 ;
-(void)attemptUnblockWithCompletion:(/*^block*/ id)arg1 ;
-(long)filterState;
-(BOOL)wasBlocked;
-(id)dataComplete;
-(void)unblockWithCompletion:(/*^block*/ id)arg1 ;
@end
