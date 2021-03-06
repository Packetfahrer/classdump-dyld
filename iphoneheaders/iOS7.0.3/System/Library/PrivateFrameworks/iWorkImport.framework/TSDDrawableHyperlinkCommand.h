/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSKCommand.h>
#import <iWorkImport/TSDPropagatableCommand.h>

@class TSDDrawableInfo, NSURL;

@interface TSDDrawableHyperlinkCommand : TSKCommand <TSDPropagatableCommand> {

	TSDDrawableInfo* mInfo;
	NSURL* mOldHyperlinkURL;
	NSURL* mNewHyperlinkURL;

}

@property (nonatomic,readonly) TSDDrawableInfo * info; 
@property (nonatomic,readonly) NSURL * newHyperlinkURL; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(BOOL)modifiesAnyObjectPassingTest:(/*^block*/ id)arg1 ;
-(void)populateChangePropagationMapAfterCommit:(id)arg1 ;
-(void)p_do;
-(id)newHyperlinkURL;
-(id)initWithInfo:(id)arg1 newHyperlinkURL:(id)arg2 ;
-(void)dealloc;
-(void)undo;
-(void)redo;
-(void)commit;
-(id)info;
-(void)setInfo:(id)arg1 ;
-(BOOL)process;
@end

