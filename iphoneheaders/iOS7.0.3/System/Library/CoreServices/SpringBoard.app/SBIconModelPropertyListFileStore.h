/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SBIconModelStore.h>

@class NSURL;

@interface SBIconModelPropertyListFileStore : NSObject <SBIconModelStore> {

	NSURL* _currentIconStateURL;
	NSURL* _desiredIconStateURL;

}

@property (nonatomic,retain) NSURL * currentIconStateURL;              //@synthesize currentIconStateURL=_currentIconStateURL - In the implementation block
@property (nonatomic,retain) NSURL * desiredIconStateURL;              //@synthesize desiredIconStateURL=_desiredIconStateURL - In the implementation block
-(id)loadDesiredIconState:(id*)arg1 ;
-(id)loadCurrentIconState:(id*)arg1 ;
-(BOOL)deleteDesiredIconState:(id*)arg1 ;
-(BOOL)deleteCurrentIconState:(id*)arg1 ;
-(BOOL)saveDesiredIconState:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveCurrentIconState:(id)arg1 error:(id*)arg2 ;
-(BOOL)_save:(id)arg1 url:(id)arg2 error:(id*)arg3 ;
-(BOOL)_delete:(id)arg1 error:(id*)arg2 ;
-(id)_load:(id)arg1 error:(id*)arg2 ;
-(id)currentIconStateURL;
-(void)setCurrentIconStateURL:(id)arg1 ;
-(id)desiredIconStateURL;
-(void)setDesiredIconStateURL:(id)arg1 ;
-(void)dealloc;
@end
