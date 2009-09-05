/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 8; tab-width: 8-*- */
/*
 * freetuxtv
 * Copyright (C) FreetuxTV Team's 2008
 * Project homepage : http://code.google.com/p/freetuxtv/
 * 
 * freetuxtv is free software.
 * 
 */

#ifndef FREETUXTV_RECORDINGS_LIST_H
#define FREETUXTV_RECORDINGS_LIST_H

#include <gtk/gtk.h>

#include "freetuxtv-app.h"

void
recordings_list_init(FreetuxTVApp *app);

void
recordings_list_load_recordings(FreetuxTVApp *app);

#endif /* FREETUXTV_RECORDINGS_LIST_H */