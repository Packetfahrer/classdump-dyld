/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSATSLineFragment, NSATSGlyphStorage;

@interface _NSATSTypesetterGuts : NSObject {

	NSATSLineFragment* _lineFragment;
	NSATSGlyphStorage* _glyphStorage;
	unsigned _lastGlyphIndex;
	unsigned _lastContainerIndex;
	SCD_Struct_NS2* _typesetterAuxiliary;
	/*function pointer*/ void** _lineFragmentRectArgs;
	char* _bidiLevels;
	struct {
		unsigned _isiChatTypesetter : 1;
		unsigned _resToWillSetLineFragmentRect : 1;
		unsigned _isBusy : 1;
		unsigned _baselineRendering : 1;
		unsigned _forceWordWrapping : 1;
		unsigned _reserved : 27;
	}  _flags;
	SCD_Struct_NS3 _paragraphState;
	CTTypesetterRef _ctTypesetter;

}
-(void)dealloc;
-(id)initWithTypesetter:(id)arg1 ;
-(void)finalize;
@end
