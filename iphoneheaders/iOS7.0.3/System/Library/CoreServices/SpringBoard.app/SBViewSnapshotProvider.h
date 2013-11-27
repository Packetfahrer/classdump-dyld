/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class UIView;

@interface SBViewSnapshotProvider : NSObject {

	UIView* _view;
	/*^block*/ id _completionBlock;

}

@property (nonatomic,copy) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
-(void)snapshotAsynchronously:(BOOL)arg1 withImageBlock:(/*^block*/ id)arg2 ;
-(void)snapshotWithImageBlock:(/*^block*/ id)arg1 ;
-(/*^block*/ id)completionBlock;
-(void)dealloc;
-(id)snapshot;
-(id)initWithView:(id)arg1 ;
-(void)setCompletionBlock:(/*^block*/ id)arg1 ;
@end
