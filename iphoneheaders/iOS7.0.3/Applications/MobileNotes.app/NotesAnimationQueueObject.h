/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface NotesAnimationQueueObject : NSObject {

	int _direction;
	unsigned _count;
	unsigned _maxCount;
	BOOL _batch;
	double _lastTappedTime;

}

@property (assign,nonatomic) int direction;                      //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) unsigned count;                     //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) unsigned maxCount;                  //@synthesize maxCount=_maxCount - In the implementation block
@property (assign,nonatomic) BOOL batch;                         //@synthesize batch=_batch - In the implementation block
@property (assign,nonatomic) double lastTappedTime;              //@synthesize lastTappedTime=_lastTappedTime - In the implementation block
-(id)initWithDirection:(int)arg1 ;
-(BOOL)batch;
-(void)setBatch:(BOOL)arg1 ;
-(double)lastTappedTime;
-(void)setLastTappedTime:(double)arg1 ;
-(void)setMaxCount:(unsigned)arg1 ;
-(unsigned)count;
-(void)setDirection:(int)arg1 ;
-(int)direction;
-(void)setCount:(unsigned)arg1 ;
-(unsigned)maxCount;
@end
