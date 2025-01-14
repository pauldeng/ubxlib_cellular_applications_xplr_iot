/*
 * Copyright 2022 u-blox
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#ifndef _APP_INIT_H_
#define _APP_INIT_H_

int32_t getSerialNumber(void);

int32_t setAppDwellTime(commandParamsList_t *params);
int32_t setAppLogLevel(commandParamsList_t *params);

void setButtonTwoFunction(void (*func)(void));
void runApplicationLoop(bool (*appFunc)(void));
void pauseMainLoop(bool state);

bool startupFramework(void);
void finalize(applicationStates_t appState);

#endif