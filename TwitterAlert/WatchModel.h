//
//  WatchModel.h
//  TwitterAlert
//
//  Created by Jesper Nielsen on 17/01/13.
//  Copyright (c) 2013 Tallisoft.dk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSMutableDictionary+SwitchStates.h"
@interface WatchModel : NSObject

- (void)save:(NSMutableDictionary *)switchStates;
- (NSMutableDictionary *)getSwitchStates;

@end
