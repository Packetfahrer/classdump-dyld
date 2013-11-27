/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@interface MSASModelEnumerator : NSEnumerator {

	sqlite3Ref _db;
	sqlite3_stmtRef _stmt;
	/*^block*/ id _stepBlock;

}

@property (assign,nonatomic) sqlite3Ref db;                     //@synthesize db=_db - In the implementation block
@property (assign,nonatomic) sqlite3_stmtRef stmt;              //@synthesize stmt=_stmt - In the implementation block
@property (nonatomic,copy) id stepBlock;                        //@synthesize stepBlock=_stepBlock - In the implementation block
+(id)enumeratorWithDatabase:(sqlite3Ref)arg1 query:(id)arg2 stepBlock:(/*^block*/ id)arg3 ;
-(void)dealloc;
-(id)init;
-(id)nextObject;
-(id)initWithDatabase:(sqlite3Ref)arg1 query:(id)arg2 stepBlock:(/*^block*/ id)arg3 ;
-(sqlite3_stmtRef)stmt;
-(/*^block*/ id)stepBlock;
-(void)setStmt:(sqlite3_stmtRef)arg1 ;
-(void)setStepBlock:(/*^block*/ id)arg1 ;
-(void)setDb:(sqlite3Ref)arg1 ;
-(sqlite3Ref)db;
-(void).cxx_destruct;
@end
