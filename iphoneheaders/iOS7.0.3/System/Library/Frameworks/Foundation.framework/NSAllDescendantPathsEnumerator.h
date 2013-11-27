/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/NSDirectoryEnumerator.h>

@class NSString, NSArray, NSFileAttributes;

@interface NSAllDescendantPathsEnumerator : NSDirectoryEnumerator {

	NSString* path;
	NSArray* contents;
	unsigned idx;
	NSString* prepend;
	NSAllDescendantPathsEnumerator* under;
	NSFileAttributes* directoryAttributes;
	NSString* pathToLastReportedItem;
	unsigned depth;
	BOOL cross;
	BOOL _padding[3];

}
+(id)newWithPath:(id)arg1 prepend:(id)arg2 attributes:(id)arg3 cross:(BOOL)arg4 depth:(unsigned)arg5 ;
-(id)directoryAttributes;
-(void)skipDescendents;
-(id)_under;
-(id)currentSubdirectoryAttributes;
-(void)dealloc;
-(id)nextObject;
-(unsigned)level;
-(id)fileAttributes;
-(void)skipDescendants;
@end
