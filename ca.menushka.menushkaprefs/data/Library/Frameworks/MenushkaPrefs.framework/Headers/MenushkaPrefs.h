@interface MenushkaPrefs : NSDictionary {
    NSDictionary *_dict;
}
+(MenushkaPrefs *)getPrefs:(NSString *)identifier;
+(BOOL)resetPrefs:(NSString *)identifier;
-(id)objectForKey:(NSString *)key default:(id)value;
-(NSInteger)intForKey:(NSString *)key default:(NSInteger)value;
-(NSUInteger)unsignedIntForKey:(NSString *)key default:(NSUInteger)value;
-(float)floatForKey:(NSString *)key default:(float)value;
-(double)doubleForKey:(NSString *)key default:(double)value;
-(BOOL)boolForKey:(NSString *)key default:(BOOL)value;
@end