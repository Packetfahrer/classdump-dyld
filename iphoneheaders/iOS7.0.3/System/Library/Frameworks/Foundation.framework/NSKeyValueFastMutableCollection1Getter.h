/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/NSKeyValueProxyGetter.h>

@class NSKeyValueNonmutatingCollectionMethodSet, NSKeyValueMutatingCollectionMethodSet;

@interface NSKeyValueFastMutableCollection1Getter : NSKeyValueProxyGetter {

	NSKeyValueNonmutatingCollectionMethodSet* _nonmutatingMethods;
	NSKeyValueMutatingCollectionMethodSet* _mutatingMethods;

}
-(id)initWithContainerClassID:(id)arg1 key:(id)arg2 nonmutatingMethods:(id)arg3 mutatingMethods:(id)arg4 proxyClass:(Class)arg5 ;
-(id)nonmutatingMethods;
-(id)mutatingMethods;
-(void)dealloc;
@end
